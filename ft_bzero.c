/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:05:56 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 13:45:02 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *ptr, int size)
{
	int i;
	unsigned char *str;

	str = ptr;
	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
}