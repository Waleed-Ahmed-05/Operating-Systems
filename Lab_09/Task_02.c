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
    printf("ID of thread no. %d is %ld.\n",TC,T_PID);
    pthread_exit(NULL);
}
int main()
{
    int Number;
    printf("Enter number of threads you wanna create: ");scanf("%d",&Number);
    pthread_t T_PID;
    for(int i = 0;i < Number;i++)
    {
        pthread_create(&T_PID,NULL,TF,NULL);
    }
    pthread_join(T_PID,NULL);
}
