/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:17
Program:WAP to print alphabets from a to z using do while loop
Roll No:30
Date:1st Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=1;
    char sa='a';
    do
    {
    printf("%c\t",sa);
    sa++;
    n++;
    }
    while(n<=26);
    getch();
    return 0;
}
