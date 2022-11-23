#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int vis[1000];
int tt=0;
int bt[1000];
int et[1000];
stack<int>st;
void dfs(int s)
{
    vis[s]=1;
    tt++;
    bt[s]=tt;
    for(int i=0;i<v[s].size();i++)
    {
        if(vis[v[s][i]]==0)
        {
           dfs(v[s][i]);
        }
    }
    tt++;
    et[s]=tt;
    st.push(s);
    return;
}
void topsort()
{
  int x;
  cout<<"\nTopological sort:";
  while(!st.empty())
  {
  x=st.top();
  st.pop();

  cout<<x<<" ";
  }

}
int main()
{
    int vc,e,a,b;
    cin>>vc>>e;
    for(int i=1;i<=e;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
    }
    for(int i=1; i<=vc; i++)
        if(vis[i]==0)
            dfs(i);
    for(int i=1;i<=vc;i++)
        cout<<i<<" -> st: "<<bt[i]<<".  et: "<<et[i]<<endl;
        topsort();
    return 0;
}
