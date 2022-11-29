#include<stdio.h>
void main()
{
int n,i,j;
int a[100],temp;
printf("enter the size\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array is\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
