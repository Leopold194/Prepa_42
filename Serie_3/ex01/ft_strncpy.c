#include <unistd.h>

void strncopy(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  i = 0;
  
  if (src != NULL)
  {
    while (i < n)
    {
      dest[i] = src[i];
      i++;
    }
  }
}