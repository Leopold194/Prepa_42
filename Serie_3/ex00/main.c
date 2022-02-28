#include <stdio.h>
#include <string.h>

void strcopy(char *dest, char *src);

int main()
{
  char src[] = "Je veux un pepito";
  char dest[10000];
  char dest2[10000];
  strcopy(dest, src);
  strcpy(dest2, src);
  printf("|%s|\n|%s|\n", dest, dest2);
  return 0;
}
