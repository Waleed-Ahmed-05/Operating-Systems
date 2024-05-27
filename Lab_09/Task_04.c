#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <pthread.h>

int TC = 0;
void *TF(void *Arg)
{
    TC = TC + 1;
    pthread_t T_PID = pthread_self();
    printf("Thread No. 0%d(ID: %ld, PID: %d)\n",TC,T_PID,getpid());
    pthread_exit(NULL);
}
int main()
{
    pthread_t T_PID[4];
    for(int i = 0;i < 4;i++)
    {
        pthread_create(&T_PID[i],NULL,TF,NULL);
    }
    for(int i = 0;i < 4;i++)
    {
        pthread_join(T_PID[i],NULL);
    }
}
