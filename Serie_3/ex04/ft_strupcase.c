#include <unistd.h>

char *ft_strupcase(char *str)
{
  char littleAlphas[] = "abcdefghijklmnopqrstuvwxyz";
  char bigAlphas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i;
  int j;
  i = 0;
  j = 0;

  if (str != NULL)
  {
    while (str[i] != '\0')
    {
      if (str[i] == littleAlphas[j])
      {
	str[i] = bigAlphas[j];
	j = 0;
	i++;
      }
      else if (j > 25)
      {
	j = 0;
	i++;
      }
      else
      {
	j++;
      }
    }
  }
  return str;
}
