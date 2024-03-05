

#include "minishell.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    char cwd[1024];

    if (getcwd(cwd, sizeof(cwd)) != NULL) 
    {
        printf("Current working directory: %s\n", cwd);
    }
    else
    {
        perror("getcwd() error");
        return EXIT_FAILURE;
    }
    return 0;
}
