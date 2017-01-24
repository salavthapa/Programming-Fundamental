/*
StudentName:SALAV THAPA
Program:Programming fundamental
Roll No:
Program:WAP to find factorial of a given numbers using recursion functions
Lab Sheet No:22
Date:2017-01-24
*/
#include<stdio.h>
long int multiplynumbers(int n);
int main()
{
    int n;
    printf("Enter the number for n\n");
    scanf("%d",&n);
    printf("factorial of %d=%ld",n,multiplynumbers(n));
    getch();
    return 0;
}
long int multiplynumbers(int n)
{
    if(n>1)
        return n*multiplynumbers(n-1);
    else
        return 1;
}
