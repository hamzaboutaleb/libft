/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:00:07 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/31 15:38:41 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && i + j < len)
		{
			if (haystack[i + j] && needle[j] != haystack[i + j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}