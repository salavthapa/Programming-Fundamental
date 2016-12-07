/*
Student Name:salav Thapa
Subject:Programingf Fundamental
Roll No:30
Lab Sheet No:10
Program:WAP to use logical operator
Date:2016-12-07
*/

#include<stdio.h>
#include <conio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a :\n");
    scanf("%d",&a);
    printf("Enter the value of b :\n");
    scanf("%d",&b);
    printf("Enter the value of c :\n");
    scanf("%d",&c);

    if(a>=b && b>=c)
    {
        printf("a is the largest number");
    }

    else if(b>=a && b>=c)
    {
        printf("b is the largest");
    }

    else
    {
        printf("c is the largest");
    }

    getch();
    return 0;
}








