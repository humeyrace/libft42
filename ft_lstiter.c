/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:33:37 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 14:56:41 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	f(void *str)
{
	printf("%s\n", str);
}

int main()
{
	t_list *first = ft_lstnew("humeyra");
	t_list *second = ft_lstnew("cengiz");
	first->next = second;
	second->next = NULL;
	ft_lstiter(first, &f);
}*/
