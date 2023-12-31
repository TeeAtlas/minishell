/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:05:50 by taboterm          #+#    #+#             */
/*   Updated: 2023/09/14 21:12:53 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H


# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <signal.h> /* signal functions */
# include <errno.h> /* for exit errors */ 
# include <sys/types.h>
# include <sys/stat.h>

# define MAX_TOKEN_LENGTH 100  //can be adjusted as needed


/*
toks: this is comprised of tokens ex: ls, -la, cat, pwd, echo...
cmd_path: "/bin/usr/echo" value associated with with 'PATH' varaible
std_in: standard input stream usually represented as 0 read from input file 
std_out: standard output stream usually represented as 1 write output
*/
typedef	struct s_ms {
	char	**toks; // double pointer becuase it's an array of strings
	char	**args; // flags/args
	char	**cmd_path; 
	int		n_cmds;
	int		n_words;
	int		*std_in; //pointer to input stream
	int		*std_out; // pointer to output stream
	int		fd_in; // not sure if we should use fd 
	int		fd_out; // or std?
} t_ms; 

/* simple parsing */
int		separator_char(char c);

/* print */




#endif