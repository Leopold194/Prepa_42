#include <unistd.h>

void ft_putnbr(int n)
{
  int nb = n, i = 10, j = 0;
  //Je crée un tableau suffisamment grand pour accueillir les chiffres du nombres donné en paramètre
  char c[1000000];

  //Si le nombre est négatif, j'ajoute un - au début du tableau, et augmente j de 1 pour commencer à mettre les chiffres de n une case après
  if (n<0)
  {
    c[0] = '-';
    j = 1;
    //Pour l'avoir en positif
    nb = -n;
  }

  while (i<nb*10)
  {
    while(nb >= i)
    {
      nb /= 10;
    }
    i *= 10;
    c[j] = (nb%10)+48;
    if (n<0)
      nb = -n;
    else
      nb = n;
    j++;
  }

  int test_end = 0;
  
  while (c[test_end] != '\0')
  {
    write(1, &c[test_end], 1);
    test_end++;
  }
}
