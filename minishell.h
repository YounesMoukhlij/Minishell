/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:10:21 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/06 12:11:06 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <readline/readline.h>


typedef struct s_mini
{
	char			**command;
	char			*char_input;
	int				flag_append;
	char			**envir;
	char			*redirection_input;
	char			*token;
	char			*redirection_output;
	struct s_mini	*next;
} t_mini;

// TOOLS
int		ft_strlen(char *s);
void	ft_putstr_fd(char *s, int fd, int flag_newline);
int		ft_strcmp(char *s1, char *s2);

// Funtions
void	functions(t_mini *mini);


t_mini	*return_data(void);
t_mini	*return_data1(void);

#endif
