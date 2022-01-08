#include <unistd.h>
#include <stdio.h>

void ft_is_negative(int n)
{
  if (n < 0)
    {
      write(1, "N\n", 3);
    }
  else
    {
      write(1, "P\n", 3);
    }
}
