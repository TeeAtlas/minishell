/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:11:26 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/15 15:15:37 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* following function needed to create new pointer to node at the end of a
* linked list
*
* @param lst: points to node at the beginning of list
* Return value: last node of the list
*/
t_list	*ft_lstlast(t_list *lst)
{
	if(!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*function first checks that lst is not null if it is list is emply and returns
NULL, node is a next node goes into loop until it is the last node which 
by default will be a null node and returns last node*/