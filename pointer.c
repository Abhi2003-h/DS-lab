#include<stdio.h>
void main()
{
int a[10],i,*p,sum=0;
p=&a[0];
printf("enter the elements\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
sum+=(*(p+i));
}
printf("sum of the array is %d\n",sum);
}

