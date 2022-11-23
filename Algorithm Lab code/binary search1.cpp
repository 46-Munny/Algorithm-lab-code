#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1,T,n,i,j,s,c=0,k;
    int f,l,mid;
    int a[100];
    int sh[50];
    cin>>T;
    while(T--)
    {
        cin>>n>>s;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(j=1;j<=s;j++)
        {
            cin>>sh[j];
        }

       for(i=1;i<=s;i++)
       {
        f=1;
        l=n;
       int ff=1;
        int ll=n;
            mid=(ff+ll)/2;
           // cout<<"\nmid:"<<mid;
       while(f<=l)
       {
           if(a[mid]<sh[i])
           {
               f=mid+1;
           }
           else if(a[mid]==sh[i])
           {
               cout<<"case i:"<<mid<<" ";
               break;
           }
           else
           {
               l=mid-1;
           }
           mid=(f+l)/2;
       }
       cout<<endl;

       }
    }
}

