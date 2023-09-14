/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quote_separators.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:27:24 by taboterm          #+#    #+#             */
/*   Updated: 2023/09/14 10:38:10 by taboterm         ###   ########.fr       */
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
	// else if (c == '\'' || c == '"')
	// 	return 1;
	return 0;
}

int	main(int ac, char **str)
{
	int	i;
	int	prev_separator;
	int single_quotes;
	
	i = 0;
	prev_separator = 1; //set to ignore possible leading white spaces
	single_quotes = 0;
	if(ac >= 2)
	{
		while(separator_char(str[1][i])) // determins length of str excluding ignored chars
			i++;
		while(str[1][i] != '\0')
		{
			if(str[1][i] == '\'')
			{
				if(single_quotes)
				{
				single_quotes = 0;
				write(1, "\n", 1);
				}
				else
					single_quotes = 1;
			}
			else if(!separator_char(str[1][i]) || single_quotes)
			{
				write(1, &str[1][i], 1);
				prev_separator = 0;
			}	
			else if (!prev_separator)
			{
				write(1, "\n", 1);
				prev_separator = 1;
			}
			i++;
		}
	}
}

// int	main(int ac, char **str)
// {
// 	int	i;
// 	int	prev_separator;
	
// 	i = 0;
// 	prev_separator = 1; //set to ignore possible leading white spaces
// 	if(ac >= 2)
// 	{
// 		while(separator_char(str[1][i])) // determins length of str excluding ignored chars
// 			i++;
// 		while(str[1][i] != '\0')
// 		{
// 			if(!separator_char(str[1][i]))
// 			{
// 				write(1, &str[1][i], 1);
// 				prev_separator = 0;
// 			}	
// 			else if (!prev_separator)
// 			{
// 				write(1, "\n", 1);
// 				prev_separator = 1;
// 			}
// 			i++;
// 		}
// 	}
// }