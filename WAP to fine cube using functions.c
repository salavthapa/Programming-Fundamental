/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:19
Program:WAP to fine cube of any number using function with no argument and no return types
Roll No:30
Date:1st Dec 2016
*/
#include<stdio.h>
void cube();
int main()
{
    cube();
    return 0;
}
void cube()
{
    int n,cube;
    printf("Enter the number for n\n");
    scanf("%d",&n);
    cube=pow(n,3);
    printf("The cube %d is %d",n,cube);
}


