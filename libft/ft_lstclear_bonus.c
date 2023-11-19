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

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst && del)
	{
	t_list *temp;
	t_list *next_node;

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
