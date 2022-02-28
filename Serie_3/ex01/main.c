#include <stdio.h>
#include <string.h>

void strncopy(char *dest, char *src, unsigned int n);

int main()
{
  char src[] = "Je veux un pepito";
  char dest[10000];
  char dest2[10000];
  unsigned int n;
  n = 5;
  strncopy(dest, src, n);
  strncpy(dest2, src, n);
  printf("|%s|\n|%s|\n", dest, dest2);
  return 0;
}
