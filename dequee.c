#include<stdio.h>
#include<stdlib.h>
int a[100],n,i,f=-1,r=-1;
int push();
int pop();
int inject();
int eject();
int display();

int main()
{
printf("Enter the limit of Queue: ");
scanf("%d",&n);
while(1)
{
printf("\nSelect an option:\n1.Push\n2.Pop\n3.Inject\n4.Eject\n5.Display\n6.Exit\n");
loop:
scanf("%d",&i);
switch (i)
{
case 1:push();
break;
case 2:pop();
break;
case 3:inject();
break;
case 4:eject();
break;
case 5:display();
break;
case 6:exit(0);
default:printf("\tINVALID SELECTION\n");
goto loop;
}
}
return 0;
}

int push()
{
if((r+1)%n==f)
printf("\n\tQUEUE OVERFLOW\n");
else
{
if(f==-1)
{
f=n-1;
r=n-1;
}
else if(f==0)
f=n-1;
else
f=f-1;
printf("Enter a value\n");
scanf("%d",&a[f]);
}
}

int pop()
{
if(f==-1)
printf("\n\tQUEUE UNDERFLOW\n");
else if(f==r)
{
printf("Deleted value is %d\n",a[f]);
f=-1;
r=-1;
}
else
{
printf("Deleted value is %d\n",a[f]);
f=(f+1)%n;
}
}

int inject()
{    
if((r+1)%n==f)
printf("\n\tQUEUE OVERFLOW\n");
else
{
if(f==-1)
f=0;
r=(r+1)%n;
printf("Enter a value\n");
scanf("%d",&a[r]);
}
}

int eject()
{
if(f==-1)
printf("\n\tQUEUE UNDERFLOW\n");
else if(f==r)
{
printf("Ejected value is %d\n",a[r]);
f=-1;
r=-1;
}
else if(r==0)
{
printf("Ejected value is %d\n",a[r]);
r=n-1;
}
else
{
printf("Ejected value is %d\n",a[r]);
r=r-1;
}
}

int display()
{
if(f==-1)
printf("\n\tQUEUE IS EMPTY\n");
else
{
printf("\nElements in Queue are ");
for(int k=0,i=f;k<=(n-f+r)%n;i=(i+1)%n,k++)
printf("%d  ",a[i]);
printf("\n\n");
}
}
