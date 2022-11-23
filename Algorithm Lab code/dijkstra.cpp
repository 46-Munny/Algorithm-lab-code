#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000], cost[1000];
typedef pair<int, int>pr;
priority_queue<pr>pqueue;
int dist[1000];
void dstra(int s, int n)
{
    int x,y,i,j;
    for( j=1; j<=n; j++)
        dist[j]= 2345678;
    dist[s]= 0;
    pqueue.push({0, s});
    while(!pqueue.empty())
    {
        pr p= pqueue.top();
        pqueue.pop();
        if(p.first!=dist[ p.second ])
            continue;
         x= p.second;
        for( i=0; i<adj[x].size(); i++)
        {
             y= adj[x][i];
            if(dist[y]>cost[x][i]+dist[x])
                dist[y]= cost[x][i]+dist[x], pqueue.push({dist[y], y});
        }
    }return;
}
int main()
{
    int node,n1,n2,w, edge, s;
    cout<<"Enter No of Node and edge:"<<endl;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        cin>>n1>>n2>>w;
        adj[n1].push_back(n2);
        cost[n1].push_back(w);
    }
    cout<<"Enter Source node:"<<endl;
    cin>>s;
    dstra(s, node);
    for(int i=1; i<node; i++)
        printf("Distance of %d from %d is: %d\n", i, s, dist[i]);
    return 0;
}



