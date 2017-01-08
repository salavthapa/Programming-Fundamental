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
int main()
{
    int n=0;
    char a;
    printf("Enter the your character\n");
    scanf("%c",&a);
    n=a;
    ((n>=65&&n<=90)||(n>=97&&n<=122))?printf("the character is alphabet"):
    printf("The character is not alphabet");
    getch();
    return 0;

}
