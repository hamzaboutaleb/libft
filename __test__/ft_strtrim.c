/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:52:07 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/04 10:58:17 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = "hhhkhhh";
	char *set = "h";

	printf("result: %s\n", ft_strtrim(s1, set));
	printf("result: %s\n", ft_strtrim("", ""));
}