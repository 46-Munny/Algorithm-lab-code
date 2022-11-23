#include<iostream>
using namespace std;
int difference(int a[],int n)
{
    int i,minval,maxval;
    minval=a[1];
    maxval=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]<minval)
            minval=a[i];
        if(a[i]>maxval)
            maxval=a[i];
    }
    return maxval-minval;
}
int main()
{
  int n,i,j,a[100],c=1,diff;
  cout<<"\nEnter the no of element:";
    cin>>n;
    cout<<"\nEnter array elements:";
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
    }
 diff=difference(a,n);
 cout<<"The difference is="<<diff;
    return 0;
}

