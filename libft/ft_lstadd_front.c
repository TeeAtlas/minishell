/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:45:38 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/05 21:46:00 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Adds the node to the "new" at the beginning of the list
*
* @param: lst: pointer to a pointer of a structure called t_list
* @param: new: pointer to t_list stuct represents the new node added to the 
* front of the linked list
* return: none
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* adds new pointer of the new node to front of list, first checks if *new pointer is not NULL
* meaning the new node actually exists. If NULL there is nothing to add and function does 
* nothing. If not NULL function sets next pointer of new node to point to current head of 
* linked list makes new pointer head of linked list */