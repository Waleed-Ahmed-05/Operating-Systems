#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main()
{
        int n=5;
        int Product=1;
        for (int i=1;i<=n;i++)
        {
                Product=Product*i;
        }
        printf("Multiplication of %d is %d.\nExecuting Addition.c now .....\n",n,Product);
        execl("/home/lp-gangster/Desktop/Lab_07/Addition","./Addition","-1",NULL);
}
