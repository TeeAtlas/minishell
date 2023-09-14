/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:19:01 by taboterm          #+#    #+#             */
/*   Updated: 2023/09/14 21:31:10 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

int	separator_char(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\v' || c == '\r')
		return 1;
	return 0;
}

void	print_tokens(char *str)
{
	int	i;
	int	prev_separator;
	int	input_len;

	i = 0;
	prev_separator = 1; //set to ignore possible leading white spaces
	while(i <= input_len)
		{
			input_len = 0;
			if(!separator_char(str[i]))
			{
				write(1, &str[i], 1);
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

int	main(int ac, char **str)
{
	int i = 0;
	if(ac >= 2)
	{
		while(str[1][i] != '\0')
		{
			print_tokens(&str[1][i]);
			i++;
		}
		
	}
}
