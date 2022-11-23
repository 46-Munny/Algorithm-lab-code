#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<char,int>, vector<pair<char,int>>, cmp> PQ;

bool cmp(pair<char,int> a, pair<char,int> b)
{
    return a.second<b.second;
}
int dist[122+1];
void dij()
{
    for(char i='a'; i<='z'; i++)
    {
        dist[i] = INT_MAX;
    }
    dist['a']=0;
    PQ.push(make_pair('a',0));
    while(!PQ.empty())
    {
        pair<char,int> u;
        u = PQ.pop();
        int l=adj[u.first].size();
        for(i=0; i<l; i++)
        {
            pair<char,int> v;
            v = adj[u.first],[i];
            int x = dist[u.second] + weight[u.first][i];
            if(x<dist[v.first])
            {
                dist[v.first] = x;
                PQ.push(make_pair(v.first,x));
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    for()
}

