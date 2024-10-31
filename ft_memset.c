/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:07:18 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/31 14:48:21 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int ch, size_t n)
{
	int i;
	unsigned char c;
	unsigned char *str;
	str = ptr;

	c = ch;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (ptr);
}