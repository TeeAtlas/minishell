/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:05:50 by taboterm          #+#    #+#             */
/*   Updated: 2023/09/13 11:16:37 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H


# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h> /* signal functions */
# include <erno.h> /* for exit errors */ 
# include <sys/type.h>
# include <sys/stat.h>

//macros: \t=tab \n=new line \v=verticle tab \f=form feed \r=carriage return
# define BLANK_SPACE " \t\n\v\f\r"


/*
toks: this is comprised of tokens ex: ls, -la, cat, pwd...
args: -la, a, 
cmd_path: "/bin/usr/echo" executable file to cmds like echo
std_in: standard input stream usually represented as 0 read from input file 
std_out: standard output stream usually represented as 1 write output
*/
typedef	struct s_ms {
	char	**toks; // double pointer becuase it's an array of strings
	char	**args; // flags/args
	char	**cmd_path;
	int		n_cmds;
	int		n_words;
	int		*std_in;
	int		*std_out;
	int		fd_in; // not sure if we should use fd 
	int		fd_out; // or std?
} t_ms; 

#endif