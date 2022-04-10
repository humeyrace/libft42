/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:21:37 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 12:10:49 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int main(void)
{
	t_list *first = ft_lstnew("ayse");
	t_list *second = ft_lstnew("humeyra");
	t_list *third = ft_lstnew("cengiz");
	first->next = second;
	second->next = third;
	third->next = NULL;
	printf("%d", ft_lstsize(first));
}*/
