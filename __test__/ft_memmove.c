/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:30:19 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 14:47:50 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest_ptr, void *src_ptr, int size);

void	test2(void)
{
	char	str[20] = "Hello, World!";

	ft_memmove(&str[0], &str[1], 13);
	printf("Source: %s\n", str);
}

void	test_1(void)
{
	char	src[] = "Hello, world!";
	char	dst[20];

	ft_memmove(dst, src, strlen(src) + 1);
	printf("Source: %s\n", dst);
}

int	main(void)
{
	test_1();
	test2();
}