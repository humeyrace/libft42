/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:29:40 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 12:05:00 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
/*
int	main()
{
	t_list *lst = ft_lstnew("ayse");
	t_list *new = ft_lstnew("humeyra");
	ft_lstadd_back(&lst, new);
	printf("%s\n", lst->next->content);
}*/
