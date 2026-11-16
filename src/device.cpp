#include "device.hpp"
#include <stdexcept>
#include <vulkan/vulkan_core.h>

namespace trace {
void Device::InitVulkan() {}
void Device::mainLoop() {}
void Device::cleanup() {}
void Device::run() {}

void Device::createInstance() {

  VkApplicationInfo appInfo{};
  appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
  appInfo.pApplicationName = "Trace";
  appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
  appInfo.pEngineName = "No Engine";
  appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
  appInfo.apiVersion = VK_API_VERSION_1_0;

  VkInstanceCreateInfo createInfo{};
  createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  createInfo.pApplicationInfo = &appInfo;
  createInfo.enabledExtensionCount = 0;
  createInfo.ppEnabledExtensionNames = nullptr;
  createInfo.enabledLayerCount = 0;
  createInfo.ppEnabledExtensionNames = nullptr;

  if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
    throw std::runtime_error("failed to create instance!");
  }

  vkDestroyInstance(instance, nullptr);
};

void Device::createApplication() {
  constexpr vk::ApplicationInfo appInfo{
      .pApplicationName = "trace",
      .applicationVersion = VK_MAKE_VERSION(1, 0, 0),
      .pEngineName = "Something",
      .engineVersion = VK_MAKE_VERSION(1, 0, 0),
      .apiVersion = vk::ApiVersion13};
  vk::InstanceCreateInfo createInfo{.pApplicationInfo = &appInfo};

  // instance = vk::raii::Instance(context, createInfo);
  // namespace trace
};
} // namespace trace
