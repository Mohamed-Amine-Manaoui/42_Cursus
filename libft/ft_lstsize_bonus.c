/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:19:04 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/15 20:44:03 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main ()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*head;
	int		size;

	node1 = (t_list *)malloc(sizeof(t_list));
	node2 = (t_list *)malloc(sizeof(t_list));
	node3 = (t_list *)malloc(sizeof(t_list));
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	node1->content = "kpascn";
	node2->content = "er;gegw";
	node3->content = "wbfwwg";
	head = node1;
	size = ft_lstsize(head);
	printf("%d",size);
	free(node1);
	free(node2);
	free(node3);
}
*/
