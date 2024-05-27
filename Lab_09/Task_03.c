#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <pthread.h>

int TC = 0;
int Number_01;
int Number_02;
int Result;
void *TF_01(void *Arg)
{
    TC = TC + 1;
    Result = Number_01 + Number_02;
    printf("Addition(Thread 0%d): %d\n",TC,Result);
    pthread_exit(NULL);
}
void *TF_02(void *Arg)
{
    TC = TC + 1;
    Result = Number_01 - Number_02;
    printf("Subtraction(Thread 0%d): %d\n",TC,Result);
    pthread_exit(NULL);
}
void *TF_03(void *Arg)
{
    TC = TC + 1;
    Result = Number_01 * Number_02;
    printf("Multiplication(Thread 0%d): %d\n",TC,Result);
    pthread_exit(NULL);
}
void *TF_04(void *Arg)
{
    TC = TC + 1;
    Result = Number_01 / Number_02;
    printf("Division(Thread 0%d): %d\n",TC,Result);
    pthread_exit(NULL);
}
int main()
{
    pthread_t T_PID_01;
    pthread_t T_PID_02;
    pthread_t T_PID_03;
    pthread_t T_PID_04;
    printf("Enter any number: ");scanf("%d",&Number_01);
    printf("Enter any number: ");scanf("%d",&Number_02);
    pthread_create(&T_PID_01,NULL,TF_01,NULL);
    pthread_create(&T_PID_02,NULL,TF_02,NULL);
    pthread_create(&T_PID_03,NULL,TF_03,NULL);
    pthread_create(&T_PID_04,NULL,TF_04,NULL);
    pthread_join(T_PID_01,NULL);
    pthread_join(T_PID_02,NULL);
    pthread_join(T_PID_03,NULL);
    pthread_join(T_PID_04,NULL);
}
