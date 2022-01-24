#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
  int tab[7] = {7, 4, 12, 24, 9, 11, 24};
  ft_sort_int_tab(tab, 7);
  int tab2[0] = {};
  ft_sort_int_tab(tab2, 0);
  
  int i;
  i = 0;
  while (i != 7)
  {
    printf("%d\n", tab[i]);
    i++;
  }
}
