/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:58:36 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/01 21:41:08 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	int_len(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += 1;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
void	fill(char *str, int n, int len, int  negative)
{
	int k;
	
	if(negative)
	{
		str[0] = '-';
	}
	while(n)
	{
		k = (n % 10);
		str[len] = (k > 0 ? k : -k) + '0';
		n = n / 10;
		len--;
	}
}

 char	*ft_itoa(int n)
 {
	int		len;
	int		negative;
	char	*str;

	len = int_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	str[len] = '\0';
	if(n < 0)
		negative = 1;
	fill(str, n, len - 1, negative);
	return (str);
 }

int	main(void)
{
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(-20));
}