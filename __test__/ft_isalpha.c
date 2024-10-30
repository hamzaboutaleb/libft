/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:21:02 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 10:38:06 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalpha(int c);

void	test(int input, int expected)
{
	int	result;

	result = ft_isalpha(input);
	if (result == expected)
	{
		printf("Test passed: input = %d, expected = %d\n", result, expected);
	}
	else
	{
		printf("Test failed: input = %d, expected = %d\n", result, expected);
	}
}

int	main(void)
{
	int i;

	i = -256;
	while (i <= 256)
	{
		test(i, isalpha(i));
		i++;
	}
}