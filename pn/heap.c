#include<stdio.h>
#include<stdlib.h>
#define max 100
void heapify();
void heapsort();
int maxdel();
int a[max], b[max],n;

void main(){
 int i;
 int m;

  printf("\nEnter the Array Size:");
  scanf("%d",&n);
  m=n;

  printf("\nEnter Elements:\n");
  for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
  heapsort();

  printf("\nThe Sorted array is:\n");
  for(i=0;i<=m;i++)
    printf("\n%d",b[i]);
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


