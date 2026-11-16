#include "device.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>
#include <stdexcept>

int main() {
  try {
    trace::Device app;
    app.run();
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
