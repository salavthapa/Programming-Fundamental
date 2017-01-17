/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:19
Program:WAP to fine cube of any number using function with no argument and no return types
Roll No:30
Date:1st Dec 2016
*/
#include<stdio.h>
#define pi 3.14
#include<math.h>
#include<conio.h>
void circle(float r);
int main()
{
    float r;
    printf("Enter the radius of circle \n");
    scanf("%f",&r);
    circle(r);
    getch();
    return 0;
}
void circle(float r)
{
    float d,c,a;
    d=(r*2);
    c=2*pi*r;
    a=pi*pow(r,2);
    printf("The diameter of circle is %f \n The circumference of circle is %f \n The area of circle is %f",d,c,a);
}
