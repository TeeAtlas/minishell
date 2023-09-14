/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:31:09 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/15 15:14:53 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
* add the node to the "new" at the end of the list
* @param lst: pointer to a pointer of the stuct called t_list
* @param new: pointer to t_list struct represents the new node added to
* the end of the list 
* return: none
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst; //assigns value *lst is pointing to
	if (!temp) // if empty create new node (new list)
	{
		*lst = new;
		return ;
	}
	// if not empty finds last element of linked list see line49
	temp = ft_lstlast(temp);
	temp->next = new;
}

/* first line creates temporary variable, and assigns value that *lst 
points to. Then we check if the linked list is empty (line 26)
if yes *lst is assigned the value of new adding a new element, new node becomes
linked list. If list is NOT empty, line 32 finds last element by calling lstlast
function passing temp as arg. It finds the last element of the linked list 
before adding a new element to the end of the list */
