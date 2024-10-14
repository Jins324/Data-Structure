#include<stdio.h>
void main()
{
 int a[100],i,n,s;
 printf("Enter the size of the array:\n");
 scanf("%d",&n);
 printf("Enter the array elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("The array elements are:\n");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }
 printf("\n Enter the number to be search:\n");
 scanf("%d",&s);
 
 for(i=0;i<n;i++)
 {
  if(a[i]==s)
  {
   printf("The given number postion is: %d \n",i+1);
   break;
  }
 }
 if(i==n)
 {
 printf("\n The given number is not in the list");
 }
} 
