#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main()
{
        printf("PID of Hello.c is %d.\n",getpid());
}
