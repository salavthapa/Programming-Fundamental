/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:19
Program:WAP to odd or even using functions
Roll No:30
Date:1st Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int oddeven(int n);
int main()
{
    int n,result;
    printf("Enter the number\n");
    scanf("%d",&n);
    result=oddeven(n);
    if(result==1)
        printf("Number is even");
    else if(result==2)
        printf("Number is odd");
    getch();
    return 0;
}
int oddeven(int n)
{
    int a;
    if(n%2==0)
    {
        a=1;
        return a;
    }
    else
    {
        a=2;
        return a;
    }

}
