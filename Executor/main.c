/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:10:00 by youmoukh          #+#    #+#             */
/*   Updated: 2024/03/07 15:04:09 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(int ac, char **av, char **env)
{
    (void) ac;
    (void) av;
    (void) env;

    t_minishell  *mini;

    mini = return_data();
    
    mini->envir = ft_fill_env(env);
    // printing   
    printf("%s\n", mini->cmd[0]);
    printf("%s\n", mini->cmd[1]);
    printf("%d\n", mini->flag_input_output[0]);
    printf("%s\n", mini->after_out_or_input[0]);

    int i = 0;
    while (mini->envir[i])
    {
        printf("%s\n", mini->envir[i]);
        i++;
    }
    // Working

    // while (1)
    // {
    //     entry = readline("Minishell $> ");
    //     functions(mini);
    //     free (entry);
    // }
}
