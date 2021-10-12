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
	if (str[0] == '-')
	{
		sign = -sign;
		i++;
	}
	if (str[0] == '+')
		i++;
	while (ft_isdigit(str[i]) == 1)
	{
		summ = summ * 10 + (str[i] - '0');
		i++;
	}
	return (summ * sign);
}

int main (void)
{   
   char *Str = " 10.23brrt";
   int Num = 0;
   int Num1 = 0;
   Num = ft_atoi(Str);
   Num1 = atoi(Str);
   printf("%d\n",Num);
   printf("%d\n",Num1);
   printf("\n");
   return 0; 
} 
