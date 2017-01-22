#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the number for n \n");
    scanf("%d",&n);
    reserve(n);
}
void reserve(int n)
{
    int r;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        printf("%d",r);
    }
    if(n!=r)
    {
        printf("\n It is palindrome");
    }
    else
    {
        printf("\n It is not a palindrome");
    }
    getch();
    return 0;
}
