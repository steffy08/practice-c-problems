
#include<stdio.h>
#include<conio.h>
#include<time.h>
void merge(int a[],int low,int mid,int high)
{
    int i,j,k,b[20];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&&j<=high)
    {
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=high)
        b[k++]=a[j++];
    for(k=low;k<=high;k++)
        a[k]=b[k];
}
void mergesort()
{
    int a[10],int low,int high;
    int mid;
    if(low>=high)
        return;
    mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    mergesort(low,high,mid);
}
void main()
{
    int a[300],l,n,k;
    clock_t st,et;
    double ts;
    printf("enter the numbers are");
    for(k=1;k<=n;k++)
    {
        a[k]=rand();
        printf("%d \t",a[k]);
    }
    st=clock();
    mergesort(a,l,n);
    et=clock();
    ts=(double)(et_st)/CLOCK_PER_SEC;
    printf("sorted numbers are:\n");
    for(k=1;k<=n;k++)
        printf("%d \t",a[k]);
    printf("the time taken is %e",ts);

}
