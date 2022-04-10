/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:07:31 by acengiz           #+#    #+#             */
/*   Updated: 2022/02/28 16:03:26 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len-- > 0)
	{
		*(str++) = (unsigned char)c;
	}
	return (b);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "humeyra";
    size_t		c = 041;
	printf("%s", ft_memset(str, c, 3));
}*/
