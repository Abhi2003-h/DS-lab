#include<stdio.h>
void main()
{
printf("enter the size\n");
int n;
scanf("%d",&n);
int min,a[n];
int i,j,loc;
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
  min=a[i];
  loc=i;
  for(j=i+1;j<n;j++)
  {
   if(a[j]<min)
{
min=a[j];
loc=j;
}
}
a[loc]=a[i];
a[i]=min;
}
printf("\n sorted array is\n");
  for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}       
}                    
