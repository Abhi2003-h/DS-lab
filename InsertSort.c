#include<stdio.h>
void main()
{
printf("enter the size\n");
int n;
scanf("%d",&n);
int key,a[n];
int i,j;
printf("enter the elements\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("array is\n");
  for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}      

for(i=0;i<n;i++)
{
 key=a[i];
j=i-1;
  while(j>=0 && a[j]>key)
{
a[j+1]=a[j];
j--;
}
a[j+1]=key;
}

printf("\n sorted array is\n");
  for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}       
}                    
