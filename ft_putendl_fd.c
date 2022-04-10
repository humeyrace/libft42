/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:22:29 by acengiz           #+#    #+#             */
/*   Updated: 2022/02/25 13:13:27 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
		while (*s != '\0')
			ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main()
{
	int fd = open("deneme6.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd("humeyra", fd);
	ft_putendl_fd("***", fd);
}*/
