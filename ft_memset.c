/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:07:18 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 13:46:41 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int ch, int n)
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