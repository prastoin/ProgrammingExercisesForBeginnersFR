#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LIMIT 20
#define EXIT_INPUT "exit\n"
#define EXITING_PROGRAM_LABEL "exiting program...\n"

int main()
{

    char str[MAX_LIMIT];
    while (1)
    {
        fgets(str, MAX_LIMIT, stdin);

        bool userEnteredExit = strcmp(str, EXIT_INPUT) == 0;
        if (userEnteredExit)
        {
            printf(EXITING_PROGRAM_LABEL);
            break;
        }
        printf("Received: %s", str);
    }

    return 0;
}