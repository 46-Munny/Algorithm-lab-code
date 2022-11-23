#include<bits/stdc++.h>
using namespace std;
#define white 1
#define gray 2
#define black 3
int adj[100][100];
int parent[100];
int dist[100];
int color[100];
int node,edge;
void bfs(int s)
{
    int i,v,x;
   for(i=0;i<node;i++)
   {
       color[i]=white;
       dist[i]=-1;
       parent[i]=-1;

   }
   color[s]=gray;
   dist[s]=0;
   queue<int>q;
   q.push(s);
   while(!q.empty())
   {
       x=q.front();
       q.pop();
       for(v=0;v<node;v++)
       {
           if(adj[x][v]==1)
           {
           if(color[v]==white)
           {

               color[v]=gray;
               dist[v]=dist[x]+1;
               parent[v]=x;
               q.push(v);
           }
           }
       }

       color[x]=black;

   }
}


int main()
{
int n1,n2,i,j,s;
cout<<"\nEnter the number of node and edge:";
cin>>node>>edge;
for(i=0;i<edge;i++)
{
    cin>>n1>>n2;
    adj[n1][n2]=1;

}
cout<<"\nEnter source vertex:";
cin>>s;
bfs(s);
for(int i=0; i<node; i++)
        printf("Distance of %d from %d is: %d\n", i, s, dist[i]);


}

