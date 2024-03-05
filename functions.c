/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:50:39 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/05 14:34:23 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_putstr_fd(char *s, int fd, int flag_newline)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	if (flag_newline == 1)
		write(fd, "\n", 1);
}

void	ft_echo(t_mini *mini)
{
	int	fd;

	if (mini->redirection_output) 
	{
		if (mini->flag_append == 1)
		{
			fd = open(mini->redirection_output, O_CREAT | O_APPEND | O_RDWR, 0777);
			if (fd == -1)
				ft_putstr_fd("cant open the file", 2, 0);	
		}
		else
		{
			fd = open(mini->redirection_output, O_CREAT | O_RDWR, 0777);
			if (fd == -1)
				ft_putstr_fd("cant open the file", 2, 0);	
		}
		ft_putstr_fd(mini->char_input, fd, 0);
	}
	else
		ft_putstr_fd(mini->char_input, 1, 0);
	if (mini->option == 0)
		write(fd, "\n", 1);
}

void	ft_cd(t_mini *mini)
{
	int	i;

	i = chdir(mini->char_input);
	if (i == -1)
		ft_putstr_fd("Error\n", 2, 0);
	printf("%d\n", i);
}

void	ft_pwd(t_mini *mini)
{
	char	pwd[1024];
	int		fd;

	if (mini->redirection_output)
	{
		if (mini->flag_append == 1)
		{
			fd = open(mini->redirection_output, O_CREAT | O_APPEND | O_RDWR, 0777);
			if (fd == -1)
				ft_putstr_fd("cant open the file", 2, 1);	
		}
		else
		{
			fd = open(mini->redirection_output, O_CREAT | O_RDWR, 0777);
			if (fd == -1)
				ft_putstr_fd("cant open the file", 2, 1);
		}
		if (getcwd(pwd, sizeof(pwd)) != NULL)
			ft_putstr_fd(pwd, fd, 1);	
	}
	else
	{	
		if (getcwd(pwd, sizeof(pwd)) != NULL)
			ft_putstr_fd(pwd, 1, 1);
	}
}

void	ft_exit(t_mini *mini)
{
	(void) mini;
	ft_putstr_fd("exit", 1, 1);
	exit(0);
}

void	ft_env(t_mini *mini)
{
	int	fd;
	int	i;
	
	i = 0;
	if (mini->redirection_output)
	{
		if (mini->flag_append == 1)
		{
			fd = open(mini->redirection_output, O_CREAT | O_APPEND | O_RDWR, 0777);
			if (fd == -1)
				ft_putstr_fd("cant open the file", 2, 0);	
		}
		else
		{
			fd = open(mini->redirection_output, O_CREAT | O_RDWR, 0777);
			if (fd == -1)
				ft_putstr_fd("cant open the file", 2, 0);	
		}
		while (mini->envir[i])
		{
			ft_putstr_fd(mini->envir[i], fd, 1);
			i++;
		}
	}
	else
	{
		i = 0;
		while (mini->envir[i])
		{
			ft_putstr_fd(mini->envir[i], 1, 1);
			i++;
		}
	}
}

void	ft_export(t_mini *mini)
{
	(void) mini;
}

void	ft_unset(t_mini *mini)
{
	(void) mini;
}


void	functions(t_mini *mini)
{
	if (ft_strcmp(mini->command, "echo") == 0)
		ft_echo(mini);
	else if (ft_strcmp(mini->command, "cd") == 0)
		ft_cd(mini);
	else if (ft_strcmp(mini->command, "pwd") == 0)
		ft_pwd(mini);
	else if (ft_strcmp(mini->command, "exit") == 0)
		ft_exit(mini);
	else if (ft_strcmp(mini->command, "env") == 0)
		ft_env(mini);
	else if (ft_strcmp(mini->command, "export") == 0)
		ft_export(mini);
	else if (ft_strcmp(mini->command, "unset") == 0)
		ft_unset(mini);
}
