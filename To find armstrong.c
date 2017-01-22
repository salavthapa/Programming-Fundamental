#include<stdio.h>
#include<conio.h>
#include<math.h>
void reserve(int n);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    reserve (n);
}
void reserve(int n)
{
 int r,sum=0,a=0,temp;
 temp=n;
 while(n>0)
 {
     r=n%10;
     a=(pow(r,3))+a;
     n=n/10;
 }
 printf("temp = %d",temp);
 printf("a = %d",a);
 if(temp==a)
 {
     printf("The number is Armstrong");
 }
 else
 {
     printf("The number is not a Armstrong");
 }
 getch();

}
