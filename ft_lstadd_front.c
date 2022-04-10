/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:22:41 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 12:05:32 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include<stdio.h>

int main()
{
	t_list *lst = ft_lstnew("humeyra");
	t_list *new = ft_lstnew("cengiz");
	ft_lstadd_front(&lst, new);
	printf("%s\n", lst->content);
	printf("%s", lst->next->content);
}*/
