#include "window.hpp"
#include <GLFW/glfw3.h>

namespace trace {

void Window::InitWindow() {
  glfwInit();
  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

  window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
}

void Window::pollEvent() {
  while (!glfwWindowShouldClose(window)) {
    glfwPollEvents();
  }
}

} // namespace trace
