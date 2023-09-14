/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:27:24 by taboterm          #+#    #+#             */
/*   Updated: 2023/09/14 21:00:01 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
start by counting words in string, delineate by while spaces and 
ignore extra white spaces, and reading the n_words before each 
pipe (or redirection token)
*/

#include "parser.h"

int	separator_char(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\v' || c == '\r')
		return 1;
	return 0;
}

int	main(int ac, char **str)
{
	int	i;
	int	prev_separator;
	int	input_len;
	
	i = 0;
	prev_separator = 1; //set to ignore possible leading white spaces
	if(ac >= 2)
	{
		input_len = 0;
		while(str[1][input_len] != '\0')
			input_len++;
		input_len--;
		while(i <= input_len)
		{
			if(!separator_char(str[1][i]))
			{
				write(1, &str[1][i], 1);
				prev_separator = 0;
			}	
			else if (!prev_separator && i < input_len)
			{
				write(1, "\n", 1);
				prev_separator = 1;
			}
			i++;
		}
	}
}
