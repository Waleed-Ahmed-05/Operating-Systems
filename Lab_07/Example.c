#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main()
{
        printf("PID of Example.c is %d.\n Executing Hello.c ..... \n",getpid());
        execl("/home/lp-gangster/Desktop/Lab_07/Hello","./Hello","-1",NULL);
}
