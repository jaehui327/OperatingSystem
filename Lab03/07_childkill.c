#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
/* 명령줄 인수로 받은 명령을 실행시킨다 */
int main(int argc, char *argv[]) {
    int child, pid, status;
    printf("-------------------\n학번: 201601692\n이름: 김재희\n-------------------\n");
    pid = fork( );
    if (pid == 0) { // 자식 프로세스
        execvp(argv[1], &argv[1]);
        fprintf(stderr, "%s:실행 불가\n",argv[1]);
    } else { // 부모 프로세스
        printf("SIGINT=%d, SIGKILL=%d, SIGTERM=%d\n", SIGINT, SIGKILL, SIGTERM);
        kill(pid, SIGINT); /* SIGKILL과 SIGTERM도 확인 */
        child = wait(&status);
        printf("[parent: %d] 자식 프로세스 %d 종료 \n", getpid(), pid);
        printf("[child : %d] 종료 코드 상위: %d 하위: %d \n", child, status >> 8, status & 0xFF);
    }
}
