/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:08:09 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 11:23:19 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	all_size;
	char	*result;

	if (!s1 || !s2)
	{
		if (s1)
			return (ft_strdup(s1));
		if (s2)
			return (ft_strdup(s2));
		else
			return (ft_strdup(""));
	}
	all_size = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((all_size + 1) * sizeof(char));
	if (!result)
		return (result);
	index = 0;
	while (*s1)
	result[index++] = *s1++;
	while (*s2)
	result[index++] = *s2++;
	result[index] = '\0';
	return (result);
}
/*
#include<stdio.h>

int	main()
{
	char s1[] = "humeyra";
	char s2[] = "cengiz";
	printf("%s", ft_strjoin(s1, s2));
}*/
