// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int summ;

	summ = 0;
	i = 0;
	sign = 1;
	if (str[i] == '0')
		return (summ);
	if (str[i] == 45)
	{
		sign = -sign;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		summ = summ * 10 + (str[i] - '0');
		i++;
	}
	return (summ * sign);
}

int main (void)
{   
   char *Str = "652.23brrt";
   int Num=0;
   Num = ft_atoi(Str);
   printf("%d\n",Num);
   return 0; 
} 