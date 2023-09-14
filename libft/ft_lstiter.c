/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:57:33 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/13 14:32:04 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
*  This function does not return anything:
*  Param lst: pointer to first element of linked list
*  Param f: pointer to a function that takes in a void pointer as it's parameter
*  and returns nothing. This function is applied to each element of the linked
*  list.
*  Brief: iterates the list 'lst' and applies the function 'f' on the content of
*  each node
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}


/* the function 'f' is a function that takes void as a parameter and returns nothing
*  it applies some action to each element of the linked list
*  exact implementation would depend of specific use case of the lstiter
*/