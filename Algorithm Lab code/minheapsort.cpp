#include<bits/stdc++.h>
using namespace std;
int b[100];

void minheapify(int a[100],int i,int n)
{
    int l,r,smallest,tmp;
    l=2*i;
    r=2*i+1;
    if(l<=n&&a[i]>a[l])
    {
      smallest=l;
    }
    else
    {
        smallest=i;
    }
    if(r<=n&&a[smallest]>a[r])
    {
      smallest=r;
    }

    if(smallest!=i)
    {
        tmp=a[smallest];
        a[smallest]=a[i];
        a[i]=tmp;
        minheapify(a,smallest,n);

    }
}

void buildmin(int a[100],int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        minheapify(a,i,n);
    }
}
void heapsort(int a[100],int n)
{
    int i,tmp,j=1;
    for(i=1;i<=n;i++)
    {
     b[i]=a[j];
      j++;
      minheapify(a,j,n);
    }
}
int main()
{
     int a[100],i,n;
     cout<<"\nno of array elements:";
     cin>>n;
     for(i=1;i<=n;i++)
     {
         a[i]=rand()%70;
     }
     buildmin(a,n);
     heapsort(a,n);
       for(i=1;i<=n;i++)
     {
         cout<<b[i]<<" ";
     }
}



