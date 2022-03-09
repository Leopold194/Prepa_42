#include <stdio.h>
#include <string.h>

void strcopy(char *dest, char *src);

int main()
{
  char src[] = "J'ai faim bordel";
  char dest[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
  char dest2[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
  strcopy(dest, src);
  strcpy(dest2, src);
  printf("|%s|\n|%s|\n", dest, dest2);
  return 0;
}
