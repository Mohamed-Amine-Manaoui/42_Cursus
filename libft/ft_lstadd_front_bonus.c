/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstadd_front_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:14:09 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/16 11:52:21 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
		new->next = *lst;
	*lst = new;
}
/*
int main ()
{
	t_list	*head;
	t_list	*new_node;
	t_list	*temp;

	head = (t_list *)malloc(sizeof(t_list));
	head->content = "im head";
	head->next = NULL;
	new_node = (t_list *) malloc(sizeof(t_list));
	new_node->content = "test";
	new_node->next = NULL;
	ft_lstadd_front(&head, new_node);
	temp = head;
	while (temp)
	{
		printf("->   %s\n", temp->content);
		temp = temp->next;
	}
}
*/
