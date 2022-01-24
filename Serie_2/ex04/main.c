#include <stdio.h>

int ft_strlen(char *str);

int main()
{
  char str[] = "Yo petit biscuit !";

  int taille;
  taille = ft_strlen(str);

  printf("%d", taille);
  return 0;
}
