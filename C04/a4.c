#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{
    fork();
    fork();
    fork();

    return 0;
}