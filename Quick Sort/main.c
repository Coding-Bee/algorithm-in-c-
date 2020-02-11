#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20000
int a[MAX];

int main()
{
    int n, l,h,i,j;
    clock_t s,e;
    double t;

    printf("enter the size of the array\n");
    scanf("%d",&n);

   // printf("enter the element into the array\n");
    for(i=0;i<n;i++)
    {
       // scanf("%d",&a[i]);
    a[i]=rand()%100;
       // a[i]=1;
       // a[i]=n-i;
    }
   printf("\nelements of array before sorting are :\n\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }

    printf("\n");

    s=clock();
    for(i=0;i<1000;i++)
    {
        for(j=0;j<1000;j++)
        {
            l=0;
            h=n-1;
            quicksort(l,h);

        }
    }
    e=clock() ;

    printf("\nelements of array after sorting are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }


    t=(double)(e-s)/CLK_TCK;
    printf("\n\nthe time taken is %1f\n\n",t);


}

void  quicksort(int l,int h)
{
    int s;
    if(l<h)
    {
        s=partition(l,h);
        quicksort(l,s-1);
        quicksort(s+1,h);
    }
}
int partition(int l,int h)
{
    int i,t,j,pivot=a[l];

    i=l;
    j=h+1;
    while(i<j)
    {
        do
        {
            ++i;

        }while(a[i]<=pivot);

         do
        {
            --j;

        }while(a[j]>pivot);

        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;

        }
    }
            t=a[l];
            a[l]=a[j];
            a[j]=t;


    return j;


}




