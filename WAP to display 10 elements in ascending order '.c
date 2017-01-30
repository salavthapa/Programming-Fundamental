#include<stdio.h>
int main()
{
int a[50],temp,n,i,temp1­;
printf("How many number u want to input:");
scanf("%d",&n);
printf("Enter %d number\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(temp=0;temp<n-1;­temp++)
{
for(i=0;i<n-temp-1;i­++)
{
if(a[i]>a[i+1])
{


temp1=a[i];
a[i]=a[i+1];
a[i+1]=temp1;
}


}

}
for(i=0;i<n;i++)
printf("%d \t",a[i]);
}
