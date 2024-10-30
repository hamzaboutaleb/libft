/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:31:32 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 11:52:28 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int		ft_isprint(int);

void	test(int input, int expected)
{
	int	result;

	result = ft_isprint(input);
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

	i = 0;
	while (i <= 127)
	{
		test(i, isprint(i));
		i++;
	}
}