/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:05:50 by taboterm          #+#    #+#             */
/*   Updated: 2023/09/12 19:14:52 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H


# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/type.h>
# include <sys/stat.h>

//macro vars: \t=tab \n=new line \v=verticle tab \f=form feed \r=carriage return
# define BLANK_SPACE " \t\n\v\f\r"


/*
struct for commands - commands are separated by pipes:
this is comprised of tokens ex: ls, -la, cat, pwd...
command_path: ex
*/
typedef	struct s_cmd {
	char	*token;
	char	*cmd;
	char	**args; 
	int		n_cmds;
	int		n_words;
	int		fd_in;
	int		fd_out;
}

#endif