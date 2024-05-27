#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main()
{
        int n=5;
        int Sum=0;
        for (int i=1;i<=n;i++)
        {
                Sum=Sum+i;
        }
        printf("Addition of %d is %d.\n",n,Sum);
}
