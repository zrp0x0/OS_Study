#include <stdio.h>
#include <unistd.h>
#include <wait.h>

int main()
{
    pid_t pid, pid1;
    pid = fork();

    if (pid == 0) {
        pid1 = getpid();
        printf("child: pid = %d\n", pid); // 자식이 반환 받은 pid
        printf("my: pid1 = %d\n", pid1); // 자식 본인의 pid
    }
    else if (pid > 0) {
        pid1 = getpid();
        wait(NULL);
        printf("child: pid = %d\n", pid); // 생성한 자식의 pid
        printf("my: pid1 = %d\n", pid1); // 부모 본인의 pid
    }
    return 0;
}