#include <stdio.h>
#include <stdlib.h>
#define size 6
#include <time.h>
int a[size],b[size];

void mergesort(int l,int h)
{
    int mid;
    if(l<h)
    {
    mid = (l+h)/2;

    mergesort(l,mid);
    mergesort(mid+1,h);
    merge(l,mid,h);
    }
    else
        return;


}

void merge(int l,int mid,int h)
{
    int i=l,j=mid+1;
    int k=l;
    int b[size];


    while(i<=mid && j<=h)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i++];


        }
        else
            b[k]=a[j++];

        k++;
    }
    while(i<=mid)
    {
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<=h)
    {
        b[k]=a[j];
        k++;
        j++;
    }
    for(i=l; i<=h; i++)
        a[i]=b[i];

}

int main()
{
    int i;
    int l=0,h=size-1;
    printf("Enter the array elements : ");
    for(i=0; i<size; i++)
    {
        a[i] = rand()%100;
    }

    s=clock();
    //for (j=0;j<1000;j++)
    for(i=0;i<10000;i++)
    mergesort(l,h);
    e=clock();

    cpu_exe_t=(double)(e-s)/CLK_TCK;
    printf("The array is the ")
    for(i=0; i<size; i++)
    {
        printf("%d\t",a[i]);
    }



    return 0;
}
