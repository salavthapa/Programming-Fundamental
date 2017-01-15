/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:18
Program:WAP to display number reverse
Roll No:30
Date:15 jan 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;

}
