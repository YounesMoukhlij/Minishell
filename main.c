/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:10:00 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/02 16:41:41 by youmoukh         ###   ########.fr       */
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

    
    mini = return_data();
    mini->envir = env;
    while (1)
    {
        entry = readline("Minishell $> ");
        functions(mini);
        free (entry);
    }
}


