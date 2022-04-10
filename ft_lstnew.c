/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acengiz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:18:47 by acengiz           #+#    #+#             */
/*   Updated: 2022/03/01 12:09:56 by acengiz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = malloc(sizeof(*first));
	if (!first)
		return (NULL);
	first->content = content;
	first->next = NULL;
	return (first);
}
/*
int main()
{
	t_list *test;
	test = ft_lstnew(":(");
	printf("icim: %s\n", test->content);
}*/
