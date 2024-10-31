/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:05:01 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 18:52:07 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_memcmp(void *str1_ptr, void *str2_ptr, int n);

void	test_memcmp(void)
{
	unsigned char	arr1[] = {1, 2, 3, 4, 5};
	unsigned char	arr2[] = {1, 2, 3, 4, 5};
	int				result;
	unsigned char	arr3[] = {1, 2, 3, 4, 6};
	unsigned char	arr4[] = {1, 2, 3, 9, 5};
	unsigned char	arr5[] = {1, 2, 3, 4, 6};
	unsigned char	arr6[] = {0, 2, 3, 4, 5};

	result = ft_memcmp(arr1, arr2, sizeof(arr1));
	printf("Test 1 - Identical arrays: %s\n", result == 0 ? "PASS" : "FAIL");
	result = ft_memcmp(arr1, arr3, sizeof(arr1));
	printf("Test 2 - Different arrays: %s\n", result != 0 ? "PASS" : "FAIL");
	result = ft_memcmp(arr1, arr4, sizeof(arr1));
	printf("Test 3 - Partially matching arrays: %s\n",
		result != 0 ? "PASS" : "FAIL");
	result = ft_memcmp(arr1, arr5, sizeof(arr1));
	printf("Test 4 - First array < Second array: %s\n",
		result < 0 ? "PASS" : "FAIL");
	result = ft_memcmp(arr1, arr6, sizeof(arr1));
	printf("Test 5 - First array > Second array: %s\n",
		result > 0 ? "PASS" : "FAIL");
}

int	main(void)
{
	test_memcmp();
	return (0);
}