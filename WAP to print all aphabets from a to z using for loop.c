/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:17
Program:WAP to print alphabets from a to z using while loop
Roll No:30
Date:1st Dec 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=1;
    char sa='a';
    while(n<=26)
    {
        printf("%c\t",sa);
        sa++;
        n++;
    }
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    char sa='a';
    for(n=1;n<=26;n++)
    {
        printf("%c\t",sa);
        sa++;
    }
    getch();
    return 0;
}
