/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:10:21 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/07 15:26:25 by ynassibi         ###   ########.fr       */
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

typedef	struct	s_bagages
{
	int	*fd;
	int	pipe_fd[2];
} t_bagages;

typedef struct s_minishell
{
	char				**cmd;
	char				*after_cmd;
	int					*flag_input_output;
	char				**after_out_or_input;
	t_bagages			*bagage;
	char				**envir;
	struct s_minishell	*next;
}	t_minishell;

typedef struct node
{
	char	**cmd;
	int	tk;
	struct node* next;
} t_node;
//yassine
int		ft_strlen(char *s);
void	ft_putstr_fd(char *s, int fd, int flag_newline);
int		ft_strcmp(char *s1, char *s2);

// Funtions
// void	functions(t *mini);

t_minishell	*return_data(void);

#endif
