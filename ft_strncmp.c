/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:27:03 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 10:54:43 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && n-- > 0)
	{
		if (s1[i] != s2[i])
			return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char s1[] = "hc";
	char s2[] = "hC";
	printf("%d", ft_strncmp(s1, s2, 2));
}*/
