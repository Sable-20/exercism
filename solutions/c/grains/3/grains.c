#include "grains.h"

uint64_t square(uint8_t index)
{
  if (index = 0 || index > 64) {
    return 0;
  }
  uint64_t out = 1;
  return out << (index - 1);
}

uint64_t total(void)
{
  int total = 0;
  for (int i = 0; i < 65; i++)
  {
    total += square(i);
  }

  return total;
}
