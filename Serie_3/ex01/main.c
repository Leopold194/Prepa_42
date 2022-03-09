#include <stdio.h>
#include <string.h>

void strncopy(char *dest, char *src, unsigned int n);

int main()
{
  char src[] = "Je veux";
  char dest[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
  char dest2[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
  unsigned int n;
  n = 8;
  strncopy(dest, src, n);
  strncpy(dest2, src, n);
  printf("|%s|\n|%s|\n", dest, dest2);
  return 0;
}
