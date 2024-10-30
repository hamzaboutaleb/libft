/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:31:32 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 10:36:21 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int		ft_isdigit(int);

void	test(int input, int expected)
{
	int	result;

	result = ft_isdigit(input);
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
		test(i, isdigit(i));
		i++;
	}
}