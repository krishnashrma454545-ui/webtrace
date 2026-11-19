#include "device.hpp"
#include "GLFW/glfw3.h"
#include "vulkan/vulkan.hpp"
#include <cstdint>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vulkan/vulkan_core.h>
#include <vulkan/vulkan_raii.hpp>

namespace trace {

Device::Device() {}
Device::~Device() {}
void Device::InitVulkan() {}
void Device::mainLoop() {}
void Device::cleanup() {}
void Device::run() {}

void Device::createInstance() {
  constexpr vk::ApplicationInfo appInfo{
      .pApplicationName = "Hello Triangle",
      .applicationVersion = VK_MAKE_VERSION(1, 0, 0),
      .pEngineName = "NO engine",
      .engineVersion = VK_MAKE_VERSION(1, 0, 0),
      .apiVersion = vk::ApiVersion13};

  std::vector<char const *> requiredLayers;
  if (enableValidationLayers) {
    requiredLayers.assign(validationLayers.begin(), enableValidationLayers)
  }
}

};

void Device::createApplication() {
  constexpr vk::ApplicationInfo appInfo{
      .pApplicationName = "trace",
      .applicationVersion = VK_MAKE_VERSION(1, 0, 0),
      .pEngineName = "Something",
      .engineVersion = VK_MAKE_VERSION(1, 0, 0),
      .apiVersion = vk::ApiVersion13};
  vk::InstanceCreateInfo createInfo{.pApplicationInfo = &appInfo};
};
VkResult Device::vkCreateInstance(const VkInstanceCreateInfo *pCreateInfo,
                                  const VkAllocationCallbacks *pAllocator,
                                  VkInstance *instance) {
  if (pCreateInfo == nullptr || instance == nullptr) {
    return
  }
};
} // namespace trace
