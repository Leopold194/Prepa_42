#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
  char test[] = "AUTRU8CHE";
  int result;
  result = ft_str_is_uppercase(test);
  if (result)
  {
    printf("Ce mot ne contient que des caracteres alphabetiques majuscules");
  }
  else
  {
    printf("Ce mot ne contient pas que des caractères alphabetiques majuscules");
  }
  return 0;
}
