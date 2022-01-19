#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
  int a;
  int b;

  a = 42;
  b = 24;

  ft_swap(&a, &b);
  printf("a : %d; b : %d", a, b);
  return 0;
}
