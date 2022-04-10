/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:36:40 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 11:01:14 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*temp_s;
	unsigned char		temp_c;

	temp_s = (unsigned const char *)s;
	temp_c = (unsigned char)c;
	while (n--)
		if (*temp_s++ == temp_c)
			return ((void *)(temp_s - 1));
	return (0);
}
/*
#include <stdio.h>
#include<unistd.h>

int	main(void)
{
	char src[] = "humeyra";
	char *ret;

	ret = ft_memchr(src, 'm', 3);	
	printf("%s", ret);
	return (0);
}*/
