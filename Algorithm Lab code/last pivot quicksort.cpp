#include<iostream>
using namespace std;
int partition1(int a[100],int p,int r)
{
    int x,i,j,temp;
    x=a[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }

    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;

    return i+1;
}
void quicksort(int a[100],int p,int r)
{
    int q;
    if(p<r)
    {
       q=partition1(a,p,r);
       quicksort(a,p,q-1);
       quicksort(a,q+1,r);

    }
}
int main()
{
int n,i,a[100];
cout<<"\nEnter no of array elements:";
cin>>n;
cout<<"\nArray elements:";
for(i=1;i<=n;i++)
{
    cin>>a[i];
}
quicksort(a,1,n);
cout<<"\nSorted Array elements:";
for(i=1;i<=n;i++)
{
    cout<<a[i]<<" ";
}
}
