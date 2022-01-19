#include <stdio.h>

void ft_ft(int *nbr);

int main()
{
  int value;
  value = 0;
  ft_ft(&value);
  printf("%d", value);
  return 0;
}
