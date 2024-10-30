/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:47:21 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 10:49:59 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int		ft_isalnum(int c);

void	test(int input, int expected)
{
	int	result;

	result = ft_isalnum(input);
	if (result == expected)
	{
		printf(GREEN "Test passed: input = %d, expected = %d\n" RESET, result,
			expected);
	}
	else
	{
		printf(RED "Test failed: input = %d, expected = %d\n" RESET, result,
			expected);
	}
}

int	main(void)
{
	int i;

	i = -127;

	while (i <= 127)
	{
		test(i, isalnum(i));
		i++;
	}
}