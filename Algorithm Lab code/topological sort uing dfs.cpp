#include<bits/stdc++.h>
using namespace std;
#define white 1
#define gray 2
#define black 3
char adj[125][125];
int color[1000];
int node,edge;
int t=1;
int stime[1000];
int fitime[1000];
stack<char>st;
void dfsvisit(char x)
{
    int i;
    color[x]=gray;
    stime[x]=t;
    cout<<"\nstime"<<stime[x]<<" ";
    t++;
     for(i='a';i<='e';i++)
   {
       if(adj[x][i]=='1')
       {
       if(color[i]==white)
       {
           dfsvisit(i);
       }
       }

   }
   color[x]=black;
   t++;
   fitime[x] =t;
   cout<<"\nftime"<<ftime[x]<<" ";
   st.push(x);

   return;
}
void dfs()
{
   char i;
   for(i='a';i<='e';i++)
   {
       color[i]=white;

   }
    for(i='a';i<='e';i++)
   {
       if(color[i]==white)
       {
           dfsvisit(i);
       }

   }

}
void tsort()
{
    char x,i;
    while(!st.empty())
    {
        x=st.top();
        st.pop();
        cout<<x<<" ";


    }
}
int main()
{
int i,j;
char n1,n2;
cout<<"\nEnter the number of node and edge:";
cin>>node>>edge;
for(i=0;i<edge;i++)
{
    cin>>n1>>n2;
    adj[n1][n2]='1';

}
dfs();
cout<<"\nTopological sort:";
tsort();

}

