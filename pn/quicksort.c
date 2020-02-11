#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[2000];
int Partition(int low,int high)
{
    int i=low;int Pivot=a[low];int temp;
    int j=high+1;
    do
    {
        do{
                ++i;
        }while(a[i]<=Pivot);
        do{
            --j;
        }
            j--;
        }while(a[j]>Pivot);
        if(i<j){
         temp=a[i];
         a[i]=a[j];a[j]=temp;
        }
}while(i<j);
        void QuickSort(int low,int high)
        {

            int S;
            if(low<high){
                S=partition(a,low,S-1);
                QuickSort(a,low,S-1);
                QuickSort(a,S+1,high);
            }
        }
        void swap(){
            int *temp,i,j;
            temp=

        }
    }
}
void main(){
    int i,j,S,low,high,N;
    printf("Enter the size of array\n");
    scanf("%d",&N);
    printf("Elements of the array before sorting are\n");
    for(i=0;i<N;i++)
        a[i]=rand()%100;
        s=clock();
        for(i=0;i<1000;i++)
            for(j=0;j<1000;j++)
            QuickSort(low,high);
            e=clock();


    Quicksort();
    printf("Elements after sorting are\n");
    for(i=0;i<N;i++)
        printf("%d",&a[i]);

}



















































































































