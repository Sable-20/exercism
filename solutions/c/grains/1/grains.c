#include "grains.h"

uint64_t square(uint8_t index)
{
  if (index == 1)
    return 1;
  if (index == 2)
    return 2;
  if (index % 2 == 0)
  {
    return index * 2;
  }
  else
  {
    return (index-1) * 2;
  }
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
