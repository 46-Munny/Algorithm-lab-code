#include<iostream>
using namespace std;
int main()
{
    int adj[9][9];
    int flag[9];
    int r,c,u,v,e,i,w;
    cout<<"\nNo of edge:";
    cin>>e;
    for(i=0;i<=e;i++)
    {
        flag[i]=0;
    }
    for(r=0;r<9;r++)
    {
        for(c=0;c<9;c++)
            adj[r][c]=0;
    }
    for(i=1;i<=e;i++)
    {
        cin>>u>>v>>w;
        adj[u][v]=w;
        adj[v][u]=w;
        flag[u]=1;
        flag[v]=1;
    }
    for(r=0;r<9;r++)
    {
        for(c=0;c<9;c++)
         {
             if(flag[r]==1&&flag[c]==1)

             cout<<adj[r][c]<<" ";
         }
         cout<<endl;
    }

}
