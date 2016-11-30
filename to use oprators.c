/*
Student Name:Salav Thapa
Subject:Programing Fundamental
Roll No:
Program:To use assignment operator
Lab Sheet No:07
Date:2016-11-28
*/

#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the first number:\n");
    scanf("%f",&a);
    printf("Enter the second number:\n");
    scanf("%f",&b);
    a+=b;
    printf("use of +=%f\n",a);
    a-=b;
    printf("use of -=%f\n",a);
    a*=b;
    printf("use of *=%f\n",a);
    a/=b;
    printf("use of /=%f\n",a);
    return 0;

}
