/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:18
Program:
Roll No:30
Date:15 jan 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
             printf(" ");
        }

        for(j=1;j<=i;j++)
        {
        printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
