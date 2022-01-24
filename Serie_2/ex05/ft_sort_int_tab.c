void ft_sort_int_tab(int *tab, int size)
{
  int i;
  int j;

  j = 0;
  i = 0;
  while (i != size)
  {
    while (j != size)
    {
      if (tab[j] > tab[i])
      {
	int c = tab[j];
	tab[j] = tab[i];
	tab[i] = c;
      }
      j++;
    }
    j = 0;
    i++;
  }  
}
