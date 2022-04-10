/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:15:58 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 11:45:00 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    f(185) -> f(18) + 5 i yazdir
    f(18) -> f(1) + 8 i yazdir
    f(1) -> 1 i yazdir
    
 
        1 i yazdir + 8 i yazdir + 5 i yazdir
 */

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -n;
	}
	else
		num = n;
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd(num % 10 + '0', fd);
}
/*
 #include <fcntl.h>
int main()
{
	int a;

	a = -11;
	int fd;
	fd = 1;
	ft_putnbr_fd(a, fd);
}*/
