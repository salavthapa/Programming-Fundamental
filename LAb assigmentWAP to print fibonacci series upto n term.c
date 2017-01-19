#include<stdio.h>
#include<conio.h>
void fib(int n);
int main()
{
    int n;
    printf("Enter value of n to print Fibonacci series\n");
    scanf("%d",&n);
    fib(n);
    getch();
    return 0;
}
void fib(int n)
{
    int i,a=0,b=1,z;
    printf("\n %d %d",a,b);
    for(i=3;i<=n;i++)
    {
        z=a+b;
        a=b;
        b=z;
        printf(" %d",z);
    }
}
