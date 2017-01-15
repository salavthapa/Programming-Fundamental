/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:18
Program:WAP to display star flip
Roll No:30
Date:15 jan 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j>i)
                printf(" ");
            else
               printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
