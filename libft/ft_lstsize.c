/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:24:55 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/20 16:35:57 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @param *lst: the beginning of the list
* Return the length of the list
*
* Counts number of nodes in the list
*/
int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0; //initialize counter and set to 0
	while(lst)
	{
		lst = lst->next;
		i++; //step thruogh list until lst = NULL
	}
	ft_printf("The length of list: %d\n", i);
	return (i); //return count
}
