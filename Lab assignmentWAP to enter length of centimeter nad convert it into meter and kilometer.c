#include<stdio.h>
#include<conio.h>
void convert();
int main()
{
    convert();
    getch();
    return 0;
}
void convert()
{
    float n,x,y;
    printf("Enter the lenght of centimeter\n");
    scanf("%f",&n);
    x=(n/100);
    y=(n/100000);
    printf("The conversion of %f into meter is %f and kilometer is %f",n,x,y);
}
