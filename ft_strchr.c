/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:23:54 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 13:46:10 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char )c)
		{
			return ((char *)s);
			break ;
		}
		++s;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
/*
#include<stdio.h>
int	main()
{
	const char c[] = "humeyra";
	printf("%s", ft_strchr(c, 'u'));
}
*/
