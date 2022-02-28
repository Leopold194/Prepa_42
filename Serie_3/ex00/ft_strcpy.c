#include <unistd.h>

void strcopy(char *dest, char *src)
{
  int i;
  i = 0;

  if (src != NULL)
  {
    while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  }
}
