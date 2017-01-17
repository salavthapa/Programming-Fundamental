/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:19
Program:WAP to find minimum number between two numbers using functions
Roll No:30
Date:1st Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int mini();
int main()
{
    int result;
    result=mini();
    printf("The result for mini is %d",result);
    getch();
    return 0;
}
int mini()
{
    int n,a;
    printf("Enter the number for n\n");
    scanf("%d",&n);
    printf("Enter the number for a\n");
    scanf("%d",&a);
    if(n<a)
    {
        return n;
    }
    else
    {
        return a;

    }
}
