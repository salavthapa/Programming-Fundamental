#include<stdio.h>
#include<conio.h>
void main()
{
    int num,res=0;
    printf("Enter the number for n \n");
    scanf("%d",&num);
    res=prime(num);
    if(res==0)
    {
        printf("\n%d the number is prime",num);
    }
    else
    {
        printf("\n%d the number is not prime",num);
    }
    getch();

}
int prime(int n)
{
    int i,count =0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }

    }
    return count;

}
