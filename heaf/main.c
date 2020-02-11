#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define size 10000

void exchange(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void HeapSort(int A[],int n)
{
    int i;
    for(i=n/2; i>=1; i--)
    {

        Heapify(A,n,i);
    }
    for(i=n; i>=2; i--)
    {
        exchange(&A[1],&A[i]);
        Heapify(A,i-1,1);
    }
}

void Heapify(int A[], int n, int i)
{
    int largest = i;
    int l = 2*i;
    int r = 2*i+1;

    if(l<=n && A[l]>A[largest])
        largest=l;
    if(r<=n && A[r]>A[largest])
        largest = r;
    if(largest!=i)
    {
        exchange(&A[largest],&A[i]);
        Heapify(A,n,largest);
    }
}

int main()
{
    int A[size];
    int n,i,j;
    clock_t s,e;
    float cpu_time;
    while(1)
    {


    printf("\nEnter the number of elements n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
       A[i]=rand()%1000;
    printf("Array before sorting:\n");
    for(i=1;i<=n;i++)
        printf("%d\t",A[i]);

        printf("\n");
        s=clock();
        for(i=0; i<500; i++)
            for(j=0; j<500; j++)
                HeapSort(A,n);
        e=clock();

        cpu_time = (float)(e-s)/CLOCKS_PER_SEC;
    printf("\n");

        for(i=1;i<=n;i++)
        printf("%d\t",A[i]);

         printf("\n time taken : %f",cpu_time);
    }



    return 0;

}
