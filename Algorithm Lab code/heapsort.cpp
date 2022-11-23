#include<stdlib.h>
#include<iostream>
using namespace std;
int n=8;
void maxheapify(int a[100],int m,int i)
{
    int l,r,largest,tmp;
    l=2*i;
    r=2*i+1;
    if(l<=m&&a[l]>a[i])
    {
        largest=l;
    }
    else
    {
        largest=i;
    }
    if(r<=m&&a[r]>a[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
       tmp=a[i];
       a[i]=a[largest] ;
       a[largest]=tmp;
    }
}
void maxheap(int a[100])
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        maxheapify(a,n,i);
    }
}
void heapsort(int a[100])
{
    int tmp,j,i;
    j=n;
    maxheap(a);
     cout<<"\nMaxheap:";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }

    for(i=n;i>=1;i--)
    {
       tmp=a[i];
       a[i]=a[1];
       a[1]=tmp;
       j--;
       maxheapify(a,j,1);
    }
}
void input(int a[])
{
    int i;
    for(i=1;i<=n;i++)
    {
        a[i]=rand()%50+1;
    }
}
int main()
{
    int a[100],i;
    input(a);
    cout<<"\nArray elements:";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    heapsort(a);
     cout<<"\nSorted Array elements:";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }

}
