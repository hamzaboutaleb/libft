/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:20:42 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 13:54:31 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, int size)
{
	int i;
	unsigned char *dest_ptr = dest;
	unsigned char *src_ptr = src;

	i = 0;
	while (i < size)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}