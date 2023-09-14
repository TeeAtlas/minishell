/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:01:22 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/30 15:13:33 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @param lst: the node to free
* @param *del: the adress of the function used to delete
* the content
* Takes as a parameter a node and frees the memory of the 
* nodes content using 'del' given as a param and frees
* the node without freeing the memory of 'next'
*/
void	ft_lstdelone(t_list *stack)
{
	if (!stack)
		return ; // if either are NULL return without doing anything
	free (stack); // then frees memory allocated to node deleting from linked list
}

/* del function: will perform some action depending on the requirements
* of the program calling it. means the function will do something to the
* node before deleting it
*/