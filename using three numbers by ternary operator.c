/*
Student Name:SALAV THAPA
Subject:Programing Fundamental
Roll No:30
Program:to print largest number among three using ternary operator
Date:2016-12-12
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter the number in a:\n");
    scanf("%d",&a);
    printf("Enter the number in b:\n");
    scanf("%d",&b);
    printf("Enter the number in c:\n");
    scanf("%d",&c);
    (a>=b && b>=c)? printf("a is greater"): (b>=a && b>=c)? printf("b is greater"): printf("c is greater");
    getch();
    return 0;

}
