/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:53:57 by hboutale          #+#    #+#             */
/*   Updated: 2024/10/30 15:21:36 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dlen;
	unsigned int slen;
	unsigned int i;
	unsigned int res;

	res = 0;
	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (size + slen);
	else
		res = slen + dlen;
	while (src[i] && dlen < size - 1)
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen] = '\0';
	return (res);
}