/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:15:46 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/04 10:15:11 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *s = "hello";

	printf("%s\n", ft_substr(s, 4, 1));
	printf("%s\n", ft_substr(s, 0, 5));
	printf("%s\n", ft_substr(s, 4, 4));
	printf("%s\n", ft_substr(s, 0, 10));
	printf("%s\n", ft_substr("hola", 0, 18446744073709551615ull));
}