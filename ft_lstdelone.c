/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:02:01 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 12:07:13 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*a)(void*))
{
	a(lst->content);
	free(lst);
}
/*
void f(void *str)
{
	printf("%s", str);
}

int main()
{
	t_list *first = ft_lstnew("humyera");
	ft_lstdelone(first, &f);
}*/
