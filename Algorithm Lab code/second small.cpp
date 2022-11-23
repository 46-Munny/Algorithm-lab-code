#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,k,c=0;
    int n,fmin,smin;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     fmin=a[0];
    smin=a[0];
    for(j=1;j<n;j++)
    {
       if(fmin>a[j])
       {

           fmin=a[j];
       }
    }
    cout<<"\n fmin:"<<fmin<<endl;
    for(j=0;j<n;j++)
    {
       cout<<a[j]<<endl;
    }
    for(j=0;j<n;j++)
    {
        c++;
       if(fmin==a[j])
       {

           break;
       }
    }
    c--;
    cout<<"\nc:"<<c<<endl;
    int tmp=a[c];
    for(j=c;j<n;j++)
    {
       a[j]=a[j+1];
    }
    for(j=1;j<n-1;j++)
    {
       if(smin>a[j])
       {

           smin=a[j];
       }
    }
    cout<<smin;
}
