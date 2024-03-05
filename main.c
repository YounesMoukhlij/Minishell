/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:10:00 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/05 18:06:16 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(int ac, char **av, char **env)
{
    (void) ac;
    (void) av;
    (void) env;

    char    *entry;
    t_mini  *mini;
    env
    mini = return_data();
    mini->envir = env;
    while (1)
    {
        entry = readline("Minishell $> ");
        functions(mini);
        free (entry);
    }
}


