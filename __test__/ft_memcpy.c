/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:53:45 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 13:56:10 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, void *src, int size);

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "world";

	puts("before memcpy");
	puts(str1);

	ft_memcpy(str1, str2, sizeof(str2));

	puts("\nafter memcpy ");
	puts(str1);

	return (0);
}