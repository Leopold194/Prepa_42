#include <stdio.h>

void strcopy(char *dest, char *src);

int main()
{
  char src[] = "Je veux un pepito";
  char dest[10000];
  strcopy(dest, src);
  printf("Mot : %s", dest);
  return 0;
}
