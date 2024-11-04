/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:09:54 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/03 20:39:50 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int		ft_atoi(char *s);

void	test(char *input, int expected)
{
	int	result;

	result = ft_atoi(input);
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
	// test positive number
	test("500", 500);
	test("1", 1);
	// test for negative number
	test("-1", -1);
	test("-600", -600);
	// test for 0
	test("0", 0);
	// test for max int
	test("2147483647", INT_MAX);
	// test for min int
	test("-2147483648", INT_MIN);
}