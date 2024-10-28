#include<stdio.h>
void main()
{
 int a[100],n,i,mid,right,left=0,num;
 printf("Enter the size of the array:\n");
 scanf("%d",&n);
 printf("Enter the array elements:\n");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\n Enter the number to be search:\n");
 scanf("%d",&num);
 right=n-1;
 while(left<=right)
 {
   mid=(left+right)/2;
   if(a[mid]==num)
   {
     printf("the elment is found at postion %d",mid);
     break;
   }
   else if(a[mid]>num)
   {
     right=mid-1;
   }
   else
   {
     left=mid+1;
   }
   if(left>right)
   {
   printf("element not found in the list");
   }
 }
}
