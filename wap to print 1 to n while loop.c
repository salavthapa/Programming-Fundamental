/*
sudent Name:SALAV THAPA
Subject:Programing Fundamental
Roll No:35
Lab Sheet No:14
Program:WAP to print natural number from 1 to n Using while loop
Date:2017-02-1
*/

#include<stdio.h>
int main(){
	int a=1,n;
	printf("Enter the value of n \n");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("\n\t%d",a++);
	}
	return 0;
}
