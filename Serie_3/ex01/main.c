#include <stdio.h>

void strncopy(char *dest, char *src, unsigned int n);

int main()
{
  char src[] = "Je veux un pepito";
  char dest[10000];
  unsigned int n;
  n = 5;
  strncopy(dest, src, n);
  printf("Mot : %s", dest);
  return 0;
}
