#include <unistd.h>
#include <stdlib.h>

void ft_print_reverse_alphabet(void)
{
  char i = 'a';
  
  while (i <= 'z')
  {
    write(1, &i, 1);
    i++;
  }
  write(1, "\n", 1);
}
