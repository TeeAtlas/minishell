/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:59 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/20 14:16:28 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// adds new node to list with index
// mallocs space for nodes... must remember to free
t_list	*ft_lstnew_mod(int value, int index)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL) // handle allocation failure
		return (NULL);
	new_node->val = value;
	new_node->index = index;
	new_node->next = NULL;
	return (new_node);
}