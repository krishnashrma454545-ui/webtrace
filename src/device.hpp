#pragma once
#define VULKAN_HPP_NO_STRUCT_CONSTRUCTORS
#include <vulkan/vulkan_raii.hpp>

namespace trace {
class Device {
public:
  Device();
  ~Device();
  void InitVulkan();
  void run();
  void mainLoop();
  void cleanup();

public:
  void createApplication();
  void createInstance();

private:
  VkInstance instance;
};
}; // namespace trace
