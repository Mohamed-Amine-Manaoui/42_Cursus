void ft_lstclear(t_list **lst, void (*del)(void *)) {
    if (lst && del) {
        t_list *current = *lst;
        t_list *next;

        while (current) {
            next = current->next;

            (*del)(current->content);
            free(current);
            current = next;
        }
        *lst = NULL;
    }
}

