/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:08:44 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/03 20:39:30 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *ptr, int size);

int	main(void)
{
	char str[] = "hello";
	int n = 2;
	ft_bzero(str, n);
	int i = 0;
	char *ptr = str;
	while (i < 6)
	{
		printf("%X ", *ptr);
		ptr++;
		i++;
	}
}