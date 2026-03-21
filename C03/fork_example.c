#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{
    pid_t pid;

    pid = fork(); // 자식 프로세스 fork
    if (pid < 0) { // error occured
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if (pid == 0) { // child process
        execlp("/bin/ls", "ls", NULL); // ls를 실행하도록
    }
    else { // parent process (pid > 0)
        wait(NULL); // 자식 프로세스의 종료 하나를 기다림
        printf("Child Complete");
    }
    return 0;
}