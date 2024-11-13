#include<stdio.h>
void main()
{
int a[100],i,n,pos;
printf("enter the limit");
scanf("%d",&n);
printf("enter the array elements:");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n the given array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("enter the position to be deleted\n");
scanf("%d",&pos);
for(i=pos;i<n;i++)
{
a[i]=a[i+1];
}
printf("\n converted array");
for(i=0;i<n-1;i++)
{
printf("%d",a[i]);
}
}
