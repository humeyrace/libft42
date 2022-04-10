/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:40:14 by acengiz           #+#    #+#             */
/*   Updated: 2022/02/28 16:10:49 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n-- > 0)
	{
		*(str++) = 0;
	}
}
/*
#include <stdio.h>
int main()
{
	char s[] = "humeyra";
	ft_bzero(s,0);
	printf("%s", s);
	
}*/
