#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    char Message_Sent[5];
    char Message_Recieved[5];
    int FD[2];
    pipe(FD);
    pid_t PID = fork();
    if (PID > 0)
    {
        printf("Enter a message for the child to recieve: ");
        scanf("%s",Message_Sent);
        write(FD[1],&Message_Sent,sizeof(Message_Sent));
    }
    else if (PID == 0)
    {
        read(FD[0],&Message_Recieved,sizeof(Message_Recieved));
        printf("I recieved a message from my parent: %s\n",Message_Recieved);
    }
    close(FD);
}
