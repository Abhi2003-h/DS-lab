#include<stdio.h>
void mergeSort();
void merge();
int low,mid,high;
int A[10],B[10];
int i,j,k;

void main()
{
    printf("enter 10 elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    low=0;
    high=9;
    mergeSort(low,high);
}

void mergeSort(int low,int high)
{
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(low,mid);
        mergeSort(mid+1,high);
        merge(low,mid,high);
    }
}

void merge(int low,int mid,int high)
{
    i=low,j=mid+1,k=low;
    while((i<=mid)&&(j<=high))
    {
        if(A[i]<A[j])
        {
            B[k]=A[i];
            j++,k++;
        }
        else
        {
            B[k]=A[j];
            j++,k++;
        }
    }
    while(i<=mid)
    {
        B[k++]=A[j++];
    }
    while(j<=high)
    {
        B[k++]=A[j++];
    }
    k=0;
    for(i=low;i<=high;i++)
    {
    A[i]=B[k];
    k++;
    }
    for(i=low;i<=high;i++)
    printf("%d",A[i]);
    
}
