#pragma once
#define VULKAN_HPP_NO_STRUCT_CONSTRUCTORS
#include <vulkan/vulkan_raii.hpp>

const std::vector<char const *> validationLayers = {
    "VK_LAYER_KHRONOS_validation"};
#ifdef NDEBUG
constexpr bool enableValidationLayers = false;
#else
constexpr bool enableValidationLayers = true;
#endif

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
  VkResult vkCreateInstance(const VkInstanceCreateInfo *pCreateInfo,
                            const VkAllocationCallbacks *pAllocator,
                            VkInstance *instance);

private:
  vk::raii::Context context;
  vk::raii::Instance instance{nullptr};
};
}; // namespace trace
