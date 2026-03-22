#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{
    int i;

    for (i = 0; i < 4; i++) {
        pid_t pid = fork();
        printf("Hello, Process! %d\n", pid);
    }
    
    return 0;
}