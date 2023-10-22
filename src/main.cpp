#include <ctc/logger.hpp>

int main()
{
  int var0 = 123;
  double var1 = 1.0;
  std::string var2 = "text var";

  LOGGER_DEBUG("Debug message {0}", var0);
  LOGGER_DEBUG("Debug message no variables");
  LOGGER_WARN("Warn message {0}, {1}", var0, var1);

  // Output file, line and message
  LOGGER_ERROR("Error message {0}, {1}, {2}", var0, var1, var2);
  LOGGER_CRITICAL("Critical Message {}, {}, {}", var0, var1, var2);

  // Output the variable address
  LOGGER_DEBUG("Pointer message {}", &var0);

  // Terminates the program if the condition is true
  // ASSERT(true, "Assertation failed");
  // ASSERT(false, "Assertation does not failed");
  // ASSERT(true, "Assertation failed {}", "123");

  // Direct usage
  ctc::logger.debug("Direct usage");

  return 0;
}