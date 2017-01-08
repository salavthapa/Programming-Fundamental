/*
Student Name:SALAV THAPA
Program:Programming fundamental
Roll No:
Program:WAP to print all natural numbers
Lab Sheet No:16
Date:2017-01-08
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,n;
    printf("Enter your number\n");
    scanf("%d",&n);
    while(i<n)
    {
        printf("%d\t",n);
        n=n-1;
    }
    getch();
    return 0;
}
