
int ft_strlen(char *str)
{
  int i;
  i = 0;

  if (str != NULL)
  {
    while (str[i] != '\0')
    {
      i++;
    }
  }
  return i;
}
