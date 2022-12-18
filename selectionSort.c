#include<stdio.h>
void main()
{
    int A[10],i,j,min,loc;
    printf("enter 10 elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    printf("%d",A[i]);
    for(i=0;i<10;i++)
    {
        min=A[i];
        loc=i;
        for(j=i+1;j<10;j++)
        {
            if(A[j]<min)
            {
            min=A[j];
            loc=j;
            }
        }
        A[loc]=A[i];
            A[i]=min;
    }
    for(i=0;i<10;i++)
    printf("%d",A[i]);
}