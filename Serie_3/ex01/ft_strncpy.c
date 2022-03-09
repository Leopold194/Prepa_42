#include <unistd.h>
#include <stdio.h>

void strncopy(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  i = 0;
  if (src != NULL)
  {
    while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
    while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  }
}
