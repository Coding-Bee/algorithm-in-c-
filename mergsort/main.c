#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int a[10];
    int b[10];

 int main()
{
    int i,n,k;
    clock_t e,s;
    double t;
    int l,h;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    s=clock();
    for(i=0;i<1000;i++)
    for(i=0;i<1000;i++)
    mergsort(0,n-1);
      e=clock();
      t=(double)(e-s)/CLK_TCK;
      printf("time=%lf\n",t);
      for(k=0;k<n;k++)
    {
       printf("%d\t",a[k]);
    }

}
void mergsort(int l,int h)
{
    int m;
    if (l<h)
    {
        m=(l+h)/2;
        mergsort(l,m);
        mergsort(m+1,h);
        merge(l,m,h);

    }
}
void merge(int l,int m,int h)
{
    int i,j;
   i=0;
   j=m+1;
  int k=0;
   while(i<=m&&j<=h)
   {
       if(a[i]<a[j])
       {
           b[k]=a[i];
           i++;
           k++;
       }
       else
        {
            b[k]=a[j];
           j++;
           k++;
        }
   }
    if(i>m)
    {
        while(j<=h)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
             while(i<=m)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=l;k<h;k++)
    {
        a[k]=b[k];
    }


}
