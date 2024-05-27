#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main()
{
        pid_t PID_01=fork();
        wait(PID_01);
        if (PID_01 > 0)
        {
                pid_t PID_02=fork();
                wait(PID_02);
                if (PID_02 > 0)
                {
                        pid_t PID_03=fork();
                        wait(PID_03);
                        if (PID_03 == 0)
                        {
                                printf("P-PID: %d, C-PID: %d\n",getppid(),getpid());
                        }
                }
                else if (PID_02 == 0)
                {
                        printf("P-PID: %d, C-PID: %d\n",getppid(),getpid());
                }
        }
        else if (PID_01 == 0)
        {
                printf("P-PID: %d, C-PID: %d\n",getppid(),getpid());
        }
}
