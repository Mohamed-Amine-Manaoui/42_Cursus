/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:40:36 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/19 18:41:23 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next_node;

	if (lst && del)
	{
		temp = *lst;
		while (temp != NULL)
		{
			next_node = temp->next;
			del(temp->content);
			free(temp);
			temp = next_node;
		}
		*lst = NULL;
	}
}
// void del(void *ptr)
// {
// 	free(ptr);
// }
// int main ()
// {
// 	t_list	*head;
// 	t_list	*new_node;
// 	t_list	*temp;

// 	head = (t_list *)malloc(sizeof(t_list));

// 	head->content = ft_strdup("im head");
// 	head->next = NULL;
// 	new_node = (t_list *) malloc(sizeof(t_list));
// 	new_node->content = ft_strdup("test");
// 	new_node->next = NULL;
// 	ft_lstadd_front(&head, new_node);
// 	ft_lstclear(&head, del);
// }
	
