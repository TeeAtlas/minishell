/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:17:45 by taboterm          #+#    #+#             */
/*   Updated: 2023/05/17 11:06:04 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* allocates with malloc and returns new node.
the member variable "content" is initialized with the 
value of the parameter "content". The variable "next"
is initialized to NULL.
Content: content to create the node with.
Returns the value of the new node */
t_list	*ft_lstnew(int value)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element)
	{
		new_element->val = value;
		new_element->next = NULL;
	}
	return (new_element);
}

/*
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit";

	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("\n%s\n\n", elem->content);
}*/