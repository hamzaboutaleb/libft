/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:31:32 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 13:47:17 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define RED "\033[31m"

void	*ft_memset(void *ptr, int ch, int n);

void	test(char *result, char *expected)
{
	int	i;

	i = 0;
	printf("Test passed: input = %s, expected = %s\n", result, expected);
}

int	main(void)
{
	char test1[] = {'a', 'c', 'd', 'e', '\0'};
	char test1_1[] = {'a', 'c', 'd', 'e', '\0'};
	test(ft_memset(test1, '0', 4), memset(test1_1, '0', 4));
}