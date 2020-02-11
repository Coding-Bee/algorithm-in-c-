#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 100
void heapify();
void heapsort();
int maxdel();
int a[max], b[max],n;

void main()
{

        int i;
        int m;
        float  cpu_exe_t;
        int list[max];
        int n,j;
        int s,e;
        m=n;
        printf("\nEnter the Array Size:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        list[i]=rand()%1000;
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
        void heapsort();
        void heapify();
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
  getchar();
}

void heapsort(){
 int i;
 heapify();
  for(i=n;i>n;i++)
    b[i]=maxdel();
}

void heapify(){
 int i, e, j;
    for(i=n/2;i>=1;i--){
        e=a[i];
        j=2*i;
     while(j<=n){
        if(j<n && a[j]<a[j+1])
            j++;
         if(e>=a[j])
            break;
          a[j/2] =a[j];
          j=j*2;
     }
     a[j/2] = e;
    }
}

int maxdel(){
 int x, e, j, i;
    if(n==0)
        return -1;
    x=a[1];
    e=a[n];

    i=1;
    j=2;

    while(j<=n){
        if(j<n && a[j]<a[j+1])
            j++;
         if(e>=a[j])
            break;
          a[j/2] =a[j];
          j=j*2;
     }
     a[i]=e;
     return x;
}
