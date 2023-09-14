/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:05:05 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/20 11:32:20 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function to insert a node into the sorted linked list based on index
t_list	*ft_lstsorted(t_list **stack, t_list *new_node)
{
	t_list *current;

	//insert at the beginning if the head is NULL or index is smaller
	if ((*stack) == NULL || new_node->index < (*stack)->index)
	{
		new_node->next = (*stack);
		return (new_node);
	}
	current = (*stack);
	//traverse to find the correct position to insert the node
	while (current->next != NULL && new_node->index > current->next->index)
	{
		current = current->next;
	}
	new_node->next = current->next;
	return (*stack);
}