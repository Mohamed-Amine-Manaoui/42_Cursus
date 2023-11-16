/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:52:08 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/15 19:14:36 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
*/
t_list *ft_lstnew(void *content)
{
	t_list *ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
/*
int main ()
{
	t_list *head = ft_lstnew("apple");
	printf("%s",head->content);
}
*/









