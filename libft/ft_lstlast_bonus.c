/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:11:04 by mmanaoui          #+#    #+#             */
/*   Updated: 2023/11/15 21:36:29 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef	struct	s_list
{
	int *data;
	struct s_list *next;
} t_list;

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main() {
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    node1->data = 10;
    node1->next = node2;

    node2->data = 20;
    node2->next = node3;

    node3->data = 30;
    node3->next = NULL;

    t_list *lastNode = ft_lstlast(node1);

        printf("Dernier élément de la liste : %d\n", lastNode->data);

    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
