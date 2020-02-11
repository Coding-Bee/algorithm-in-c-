
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 500
int A[MAX],n,m,l,h,b[MAX];
void Merge(int l,int m,int h)
{
    int i=l,j=m+1,k=l;
    while(i<=m && j<=h)
    {
        if(A[i]<=A[j])
        {
            b[k]=A[i];
            i++;
        }
        else
        {
            b[k]=A[j];
            j++;
        }
        k++;
    }
        while(i<=m)
            {
                b[k]=A[i];
                i++;
                k++;
            }

        while(j<=h)
        {
                b[k]=A[j];
                j++;
                k++;
        }
        for(k=l;k<=h;k++)
        {
            A[k]=b[k];
        }
}
void Mergesort(int l,int h)
{
    if(l<h)
    {
        m=(l+h)/2;
        Mergesort(l,m);
        Mergesort(m+1,h);
        Merge(l,m,h);
    }
}
void main()
{
    int i,j;
    clock_t s,e;
    double cpu_exe_t;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
       // scanf("%d",&A[i]);
       A[i]=rand()%100;
    printf("Array before sorting:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    s=clock();
    for(j=0;i<10000;j++)
        for(i=0;i<10000;i++)
    {
       l=0;
        h=n-1;
        Mergesort(l,h);
    }
    e=clock();
    cpu_exe_t=(double)(e-s)/CLK_TCK;


    printf("\nArray after sorting:\n");
     for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nTime:%lf\n\n",cpu_exe_t);
}
