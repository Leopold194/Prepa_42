#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
  char test[] = "Autru7che";
  int result;
  result = ft_str_is_alpha(test);
  if (result)
  {
    printf("Ce mot ne contient que des caracteres alphabetiques");
  }
  else
  {
    printf("Ce mot ne contient pas que des caractères alphabetiques");
  }
  return 0;
}
