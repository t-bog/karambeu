void	ft_putchar(char c);

void	ft_print_comb()
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	while ((i <= '7') && (j <= '8') && (k <= '9'))
	{
	  if (j == '8')
		{
		 i++;
		}
	  if (k == '9')
		 {
	          j++;
                 }
	  if (k <= '9')
		 {
		  ft_putchar(i);
		  ft_putchar(j);
		  ft_putchar(k);
		  ft_putchar(',');
	  	  ft_putchar(' ');
	  	  k++;
		 }
	}
}
