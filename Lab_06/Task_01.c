#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int n;
    printf("Enter the number of child processes to create (greater than 2): ");
    scanf("%d", &n);
    if (n <= 2) 
    {
        fprintf(stderr, "Number of child processes should be greater than 2\n");
        return 1;
    }
    for (int i = 0; i < n; ++i) 
    {
        int pid = fork();
        if (pid == 0) 
        {
            printf("Child process %d. PID: %d\n", i+1, getpid());
            return 0;
        } else if (pid < 0) 
        {
            perror("fork");
            return 1;
	    }
    }
    for (int i = 0; i < n; ++i) 
    {
        wait(NULL);
    }
    return 0;
}
