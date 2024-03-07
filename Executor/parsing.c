#include "minishell.h"

t_minishell	*return_data(void)
{
	t_minishell *mini;

	mini = malloc(sizeof(t_minishell));
	if (!mini)
	{
		printf("error malloc\n");
		exit(0);
	}
	mini->cmd = malloc(sizeof(char *) * 2);
	mini->cmd[0] = "env";
	mini->cmd[1] = NULL;
	mini->after_cmd = NULL;
	mini->flag_input_output = malloc(sizeof(int) * 1);
	mini->flag_input_output[0] = 0;
	mini->after_out_or_input = malloc(sizeof(char *) * 1);
	mini->after_out_or_input[0] = NULL;
	mini->envir = NULL;
	mini->next = NULL;
	return (mini);
}
