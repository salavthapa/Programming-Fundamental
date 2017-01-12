/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:17
Program:WAP to print sum of all odd numbers between 500 to 1000 using do while loop
Roll No:30
Date:1st Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=500,sum=0;
    do
    {
    if(n%2==1)
    {
        sum=sum+n;
    }
        n++;
    }
    while(n<=1000);
    printf("the sum of odd between 500 and 1000 is %d",sum);
    getch();
    return 0;
}
