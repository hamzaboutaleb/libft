/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:34:46 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/04 17:19:45 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	char	*byte;
	size_t	i;

	if (elsize && nelem > (size_t)-1 / elsize)
		return (NULL);
	ptr = malloc(nelem * elsize);
	if (!ptr)
		return (NULL);
	i = 0;
	byte = (char *)ptr;
	while (i < nelem * elsize)
	{
		byte[i] = 0;
		i++;
	}
	return (ptr);
}
