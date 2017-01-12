/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:17
Program:WAP to print table of any number
Roll No:30
Date:1st Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,z,table;
    printf("Enter your number\n");
    scanf("%d",&n);
    for(z=1;z<=10;z++)
    {
        table=n*z;
        printf("\n%d * %d = %d",n,z,table);
    }
    getch();
    return 0;
}
