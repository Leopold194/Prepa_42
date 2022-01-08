#include <unistd.h>
#include <stdlib.h>

void ft_print_reverse_alphabet(void)
{
  char alphabet[27];
  alphabet[26] = '\n';
  for (int i = 90; i >= 65; i--)
    {
      alphabet[abs(i-90)] = (char)i;
    }
  write(1, alphabet, 29);
}
