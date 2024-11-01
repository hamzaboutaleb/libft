/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:17:33 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/01 14:35:49 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *s = "hello world";
	char c = ' ';
	char **arr;
	int i;

	i = 0;
	arr = ft_split(s, c);
	while (arr[i] != 0)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}