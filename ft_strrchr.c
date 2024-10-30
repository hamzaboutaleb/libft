/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:02:39 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 16:05:06 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int c)
{
	int i;
	char *result;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == c)
			result = &(str[i]);
	}
	return (result);
}