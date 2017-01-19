#include<stdio.h>
#include<conio.h>
float cintoF();
int main()
{
    float result;
    result=cintoF();
    printf("The temperature converted into Fahrenheit is %f",result);
    getch();
    return 0;
}
float cintoF()
{
    float c,f;
    printf("Enter temperature in Celsus \n");
    scanf("%f",&c);
    f=(c*1.8)+32;
    return f;
}
