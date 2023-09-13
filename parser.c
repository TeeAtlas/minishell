/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:27:24 by taboterm          #+#    #+#             */
/*   Updated: 2023/09/13 18:15:00 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
start by counting words in string, delineate by while spaces and 
ignore extra white spaces, and reading the n_words before each 
pipe (or redirection token)
*/

#include "parser.h"

int	ignore(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\v' || c == '\r')
		return 1;
	else if (c == '\'' || c == '"')
		return 1;
	return 0;
}

int	single_in_dbl(int c)
{
	if (c == '\'' && c == '"')
		write(1, &c, 1);
}

int	main(int ac, char **str)
{
	int	i;
	int	prev_whitespace;
	int	end;
	
	i = 0;
	prev_whitespace = 1; //set to ignore possible leading white spaces
	if(ac >= 2)
	{
		while(ignore(str[1][i]))
			i++;
		end = i;
		while(str[1][end] != '\0')
			end++;
		while(i <= end)
		{
			if(!ignore(str[1][i]))
			{
				write(1, &str[1][i], 1);
				prev_whitespace = 0;
			}	
			else if (!prev_whitespace)
			{
				write(1, "\n", 1);
				prev_whitespace = 1;
			}
			i++;
		}
		end--; // traversing backwards to ignore possible white spaces
	}
}


// int	main(int ac, char **str)
// {
// 	int	i;
// 	int	prev_whitespace;
// 	int	end;
	
// 	i = 0;
// 	prev_whitespace = 1; //set to ignore possible leading white spaces
// 	if(ac >= 2)
// 	{
// 		while(ignore(str[1][i]))
// 			i++;
// 		end = i;
// 		while(str[1][end] != '\0')
// 			end++;
// 		end--;
// 		while(i <= end)
// 		{
// 			if(!ignore(str[1][i]))
// 			{
// 				write(1, &str[1][i], 1);
// 				prev_whitespace = 0;
// 			}	
// 			else if (!prev_whitespace)
// 			{
// 				write(1, "\n", 1);
// 				prev_whitespace = 1;
// 			}
// 			i++;
// 		}
// 	}
// }