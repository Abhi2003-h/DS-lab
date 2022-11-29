#include<stdio.h>
void main()
{
int a[100],n,key,i,j,temp;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
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
temp=a[j+1];
a[j+1]=a[j];
a[j]=temp;
}
}
}
printf("enter the element to be found\n");
scanf("%d",&key);
int beg=0,end=n-1,mid=(beg+end)/2;
while(beg<=end && a[mid]!=key)
{
if(a[mid]<key)
{
beg=mid+1;
}
else
{
end=mid-1;
}
mid=(beg+end)/2;
}
if(a[mid]==key)
printf("element found\n");
else
printf("elelment not found\n");
}
