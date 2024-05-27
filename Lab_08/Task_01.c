#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int Number;
    int Addition;
    int Subtraction;
    int Multiplication;
    int Division;
    int FD_01[2];
    int FD_02[2];
    printf("Enter any number: ");
    scanf("%d", &Number);
    pipe(FD_01);
    pipe(FD_02);
    pid_t PID_01 = fork();
    if (PID_01 > 0)
    {
        pid_t PID_02 = fork();
        wait(NULL);
        if (PID_02 == 0)
        {
            Multiplication = Number * Number;
            Division = Number / Number;
            write(FD_01[1],&Multiplication,sizeof(Multiplication));
            write(FD_02[1],&Division,sizeof(Division));
        }
    }
    else if (PID_01 == 0)
    {
        Addition = Number + Number;
        Subtraction = Number - Number;
        pid_t PID_03 = fork();
        wait(NULL);
        if (PID_03 == 0)
        {
            read(FD_01[0],&Multiplication,sizeof(Multiplication));
            read(FD_02[0],&Division,sizeof(Division));
            printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %d\n",Addition,Subtraction,Multiplication,Division);
        }
    }
    return 0;
}
