/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:40:42 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 10:52:35 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
		if (s[i] == (char) c)
			return ((char *)(s + i));
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char s[]="humeyracengiz";
	printf("%s", ft_strrchr(s, 'e'));
}*/
