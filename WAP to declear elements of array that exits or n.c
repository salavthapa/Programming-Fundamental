#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,n;
    for(i=0;i<5;i++)
    {
        printf("Enter your number %d:\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the number to search:\n");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    if(n==a[i])
        printf("the number exit",n);
        else
            printf("the number does not exit");
      getch();
    return 0;


}
