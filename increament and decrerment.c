/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:09
Program:WAP to demonstration the working of increment and decrement operators
Roll No:30
Date:1st Dec 2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("the use if increment post a++ %d \n",a++);
    printf("the use of increment prefix  ++a %d \n",++a);
    printf("the use of decrement post a-- %d \n",a--);
    printf("the use of decrement post --a %d \n",--a);
    getch();
    return 0;

}
