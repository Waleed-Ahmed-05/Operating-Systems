#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int sum(int n) 
{
    int s = 0;
    for (int i = 1; i <= n; i++) 
    {
        s += i;
    }
    return s;
}
int product(int n) 
{
    int p = 1;
    for (int i = 1; i <= n; i++) 
    {
        p *= i;
    }
    return p;
}
int main() 
{
    int n;
    printf("Enter the number of child processes to create (greater than 0): ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        fprintf(stderr, "Number of child processes should be greater than 0\n");
        return 1;
    }
    int pid = fork();
    if (pid == 0) 
    {
        printf("Child process. PID: %d\n", getpid());
        printf("Product of numbers from 1 to %d is %d\n", n, product(n));
        return 0;
    } 
    else if (pid < 0) 
    {
        perror("fork");
        return 1;
    } 
    else 
    {
        printf("Parent process. PID: %d, Child PID: %d\n", getpid(), pid);
        printf("Sum of numbers from 1 to %d is %d\n", n, sum(n));
    }

    return 0;
}
