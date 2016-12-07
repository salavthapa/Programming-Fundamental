/*
Student Name:salav Thapa
Subject:Programingf Fundamental
Roll No:30
Lab Sheet No:10
Program:WAP to use logical operator
Date:2016-12-07
*/

#include<stdio.h>
#include<conio.h>
int main(){
     int a;
     printf("Enter your score:\n");
     scanf("%d",&a);
     if (a>=80)
     {
         printf("you have scored distinction %d",a);

     }
     if (a>=60 && a<80)
     {
        printf("you have scored first division %d",a);
     }
    if (a>=50||a<60)
    {
        printf("you have scored second division %d",a);

    }
    if (a<=45)
    {
       printf("you haver scored third division %d",a);
    }
    getch();
    return 0;
}


