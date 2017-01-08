/*
Student Name:SALAV THAPA
Program:Programming Fundamental
Roll No:
Lab Sheet No:16
Program:WAP to check leap year
Date:2017-01-08
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the year\n");
    scanf("%d",&n);
    if(n%100==0)
    {
        printf("The year is not a leap year\n");
    }
    else if(n%400==0)
    {
        printf("The year is leap year\n");
    }
    else if(n%4==0)
    {
        printf("the year is a leap year\n");
    }
    else
    {
        printf("not leap year\n");
    }
}
 getch();

