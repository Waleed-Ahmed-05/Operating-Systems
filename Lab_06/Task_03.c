#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int counter = 0;

void increment_counter() 
{
    for (int i = 0; i < 1000000; i++) 
    {
        counter++;
    }
}

int main() 
{
    pid_t pid = fork();
    if (pid == 0) 
    {
        printf("Child process. PID: %d\n", getpid());
        increment_counter();
        printf("Child process. Counter value: %d\n", counter);
        return 0;
    } else if (pid < 0) 
    {
        perror("fork");
        return 1;
    } else 
    {
        printf("Parent process. PID: %d, Child PID: %d\n", getpid(), pid);
        increment_counter();
        printf("Parent process. Counter value: %d\n", counter);
    }
    return 0;
}
