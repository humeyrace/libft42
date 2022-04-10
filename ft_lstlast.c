/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:35:43 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 12:09:14 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
	t_list *first = ft_lstnew("ayse");
	t_list *second = ft_lstnew("humeyra");
	first->next = second;
	second->next = NULL;
	t_list *son = ft_lstlast(first);
	printf("%s", son->content);

}
*/
