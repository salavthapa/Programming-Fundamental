/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:17
Program:WAP to first and last number
Date:1st Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a;
    printf("Enter the number for n \n");
    scanf("%d",&n);
    a=n%10;
    for(;n>9;)
    {
        n=n/10;
    }
    printf("the first %d and last digit is %d",n,a);
    getch();
    return 0;


}
