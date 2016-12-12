/*
Student Name:SALAV THAPA
Subject:Programing Fundamental
Roll No:30
Program:to find the nunber is odd or even
Date:2016-12-12
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the number in n:\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the number is even");
    }
    else if(n%1==0)
    {
        printf("the number is odd");
    }
    getch();
    return 0;

}
