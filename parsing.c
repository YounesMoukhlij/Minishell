#include "minishell.h"

t_mini	*return_data(void)
{
	t_mini *mini;

	mini = malloc(sizeof(t_mini));
	if (!mini)
	{
		printf("error malloc\n");
		exit(0);
	}
	mini->command = "env";
	mini->flag_append = 0;
	mini->redirection_input = NULL;
	mini->redirection_output = "a";
	mini->option = 0;
	mini->char_input = "younes";
	mini->left = NULL;
	mini->right = NULL;
	return (mini);
}

// t_mini	*return_data1(void)
// {
// 	t_mini *mini;

// 	mini = malloc(sizeof(t_mini));
// 	if (!mini)
// 	{
// 		printf("error malloc\n");
// 		exit(0);
// 	}
// 	mini->command = "cd";
// 	mini->flag_append = 1;
// 	mini->redirection_input = NULL;
// 	mini->redirection_output = "a";
// 	mini->option = 0;
// 	mini->char_input = "test";
// 	mini->left = NULL;
// 	mini->right = NULL;
// 	return (mini);
// }