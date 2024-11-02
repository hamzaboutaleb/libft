/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:34:52 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/02 09:40:57 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	has(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	start_index(char const *s1, char const *set)
{
	size_t	result;

	result = 0;
	while (s1[result] && has(s1[result], set))
		result++;
	return (result);
}
static size_t	end_index(char const *s1, char const *set)
{
	size_t	result;

	result = ft_strlen(s1) - 1;
	while (result >= 0 && has(s1[result], set))
		result--;
	return (result + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	start = start_index(s1, set);
	end = end_index(s1, set);
	i = 0;
	if (start >= end)
		return (ft_strdup(""));
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, (char *)(s1 + start), (end - start));
	result[end - start] = '\0';
	return (result);
}
