#include <stdio.h>
#include <unistd.h>
#include <wait.h> // 왜 이게 pid_t를 해주지? 근데 없어도 아무런 문제 없음

int main()
{
    pid_t pid;
    pid = fork();
    printf("Hello, Process %d!\n", pid);
    return 0;
}

