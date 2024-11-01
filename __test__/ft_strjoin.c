/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:51:41 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/01 10:55:58 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = "hello";
	char *s2 = " world";
	char *result;

	result = ft_strjoin(s1, s2);
	printf("result: %s\n", result);
}