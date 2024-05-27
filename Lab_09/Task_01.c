#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <pthread.h>

int Number = 0;
int Result = 0;
void *TF(void *Arg)
{
    Number = Number + 1;
    Result = Result + Number;
    pthread_exit(NULL);
}
int main()
{
    pthread_t T_PID_01;
    pthread_create(&T_PID_01,NULL,TF,NULL);
    pthread_join(T_PID_01,NULL);
    pthread_t T_PID_02;
    pthread_create(&T_PID_02,NULL,TF,NULL);
    pthread_join(T_PID_02,NULL);
    pthread_t T_PID_03;
    pthread_create(&T_PID_03,NULL,TF,NULL);
    pthread_join(T_PID_03,NULL);
    printf("Number : %d, Result: %d\n",Number,Result);
}
