#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max_elements 5000


int insert_sort(int a[],int n)
{
int i,j,key;
    for(j=1 ;i<=n;i++)
    {
        key=a[j];
        while(i>-1 && key<a[i])
        {
        a[i+1]= a[i];
        i=i-1;

        }
        a[j++]=key;

    }

}
int main(int a[])
{
    float  cpu_exe_t;
     int list[Max_elements];
    int n,i,j;
    int s,e;

    printf("Enter the size of array:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      list[i]=rand()%100;
     }
    printf("The array elements are:");
    for(i=0;i<n;i++)
    {

        printf("%d\t",list[i]);
    }
    s=clock();
     for(j=0;j<1000;j++)
        for(i=0;i<1000;i++)
     {
        insert_sort(a,n);
     }

    e=clock();
    cpu_exe_t=(double)(e-s)/CLK_TCK;
    printf("\n The sorted array is:\n");
    for(i=0;i<n;i++)
    {

        printf("%d\t",list[i]);
    }
    printf("CPU EXECUTION TIME IS %lf",cpu_exe_t);
    return 0;

}
