#pragma once

#include <GLFW/glfw3.h>
#include <cstdint>
#include <iostream>

namespace trace {
class Window {
public:
  Window() = default;
  ~Window() {
    glfwDestroyWindow(window);
    glfwTerminate();
  };

  void InitWindow();
  void pollEvent();
  void SetWindowSize(uint32_t m_WIDTH, uint32_t m_HEIGHT) {
    if (m_WIDTH || m_HEIGHT < 1) {
      std::cout
          << "width or height is too short so height and width don't get \n"
             "change it still default \n";
    } else {
      this->HEIGHT = m_HEIGHT;
      this->WIDTH = m_WIDTH;
    }
  }

private:
  GLFWwindow *window = nullptr;
  uint32_t WIDTH = 600;
  uint32_t HEIGHT = 400;
};
} // namespace trace
