/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboutale <hboutale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:56:50 by hboutale          #+#    #+#             */
/*   Updated: 2024/11/04 09:59:50 by hboutale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 0x100)
	{
		printf("%d  %c  %c\n", i, ft_toupper(i), toupper(i));
		if (ft_toupper(i) != toupper(i))
		{
			printf("error %d  %d  %d\n", i, ft_toupper(i), toupper(i));
		}
		i++;
	}
}
