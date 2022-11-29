#include<stdio.h>
void main()
{
int a[10],i,min,max;
printf("enter the elements\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
max=a[0];
for(i=1;i<10;i++)
{
if(min>a[i])
min=a[i];
}
for(i=1;i<10;i++)
{
if(max<a[i])
max=a[i];
}
printf("Largest no. in the array is %d\n",max);
printf("Smallest no. in the array is %d\n",min);
}
