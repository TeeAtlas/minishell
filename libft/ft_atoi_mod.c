/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:28:53 by taboterm          #+#    #+#             */
/*   Updated: 2023/04/18 19:27:22 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"
/*The atoi() A to I function converts the initial portion of 
the string pointed to by str to int representation. Can hold positive
and negative variables*/
//modified to check for min max int

int	ft_atoi_mod(const char *str)
{
	long long int	res;
	int				sign;
	int				i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (res < INT_MIN || res > INT_MAX)
		exit(write(2, "Error: value outside of range\n", 31));
	return (sign * (int)res);
}
