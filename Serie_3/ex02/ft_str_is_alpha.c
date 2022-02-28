#include <stdio.h>

int ft_str_is_alpha(char *str)
{
  char alphas[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i;
  int j;
  int k;
  i = 0;
  j = 0;
  k = 0;

  if (str != NULL)
  {
    while (str[i] != '\0')
    {
      while (alphas[j] != '\0' && k == 0)
      {
        if (str[i] == alphas[j])
	{
	  j = 0;
	  k = 1;
	}
	else
	{
	  j++;
	  k = 0;
	}
	
      }
      if (k == 0)
	return 0;
      k = 0;
      i++;
    }
  }
  return 1;
}
