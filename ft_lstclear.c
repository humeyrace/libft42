/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:48:56 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 12:06:42 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*a)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !a)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, a);
		*lst = tmp;
	}
}
/*
void f(void *str)
{
	printf("%s", str);
}

int main(void)
{
	t_list *first = ft_lstnew("humeyra");
	ft_lstclear(&first, &f);
}
*/
