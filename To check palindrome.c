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
    int r,sum=0,temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("\nTHe reserve number is %d\n",sum);
    printf("sum=%d",sum);
    if(temp==sum)
    {
        printf("\nIt is palindrome");
    }
    else
    {
        printf("\nIt is not a palindrome");
    }
    getch();
    return 0;
    }

