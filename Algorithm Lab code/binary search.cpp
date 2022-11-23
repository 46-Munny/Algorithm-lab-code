#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=1,T,n,i,j,s,c=0,k;
    int a[100];
    int sh[50];
    cin>>T;
    while(t<=T)
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
            c=0;
            for(j=1;j<=n;j++)
            {
                if(a[j]==sh[i])
                {
                    cout<<j<<" ";
                    c++;
                }
            }
            if(c==0)
            {
                for(k=1;k<=n;k++)
                {
                    if(a[k]>sh[i])
                    {
                        cout<<k-1<<endl;
                        break;
                    }
                }
            }

        }

        t++;
    }
}
