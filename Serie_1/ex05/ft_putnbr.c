#include <unistd.h>

void ft_putnbr(int n)
{

  unsigned int n1;

  if (n<0)
  {
    write(1, "-", 1);
    n1 = -n;
  }
  else
    n1 = n;
 
  int i;
  i = 0;
  
  if (n1<10 && n1>=0)
  {
    char end = n1+48;
    write(1, &end, 1);
    return;
  }

  ft_putnbr(n1/10);
  char character = n1%10+48;
  write(1, &character, 1);
}
