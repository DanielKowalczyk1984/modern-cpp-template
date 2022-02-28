#include <fmt/core.h>

#include "project/tmp.hpp"

int main(int argc, char const *argv[])
{
  fmt::print("test {}\n", tmp::add(5, 6));
  return 0;
}
