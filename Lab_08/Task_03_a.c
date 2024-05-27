#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#define Size 1024
int main()
{
    int FD;
    char Message[Size];
    mkfifo ("Walkie",0666);
    while(1)
    {
        FD = open("Walkie",O_WRONLY);
        printf("Your Response: ");scanf("%s",Message);
        write(FD,&Message,sizeof(Message));
        close(FD);
        FD = open("Talkie",O_RDONLY);
        read(FD,Message,sizeof(Message));
        printf("Talkie: %s\n",Message);
        close(FD);
    }
    close(FD);
}
