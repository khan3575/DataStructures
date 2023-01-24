#include<bits/stdc++.h>
#include<vector>
using namespace std;
const int N= 100;
vector<int> g(N);
bool vis[N];
void dfs( int vertex)
{
    if(vis[vertex]==true) return;
    vis[vertex]=true;
    cout<<vis[vertex]<<endl;
    for(int child : g[vertex])
    {
        cout<<"par"<<vertex<<" child"<<child<<endl;
        if(vis[child])continue;

        dfs(child);
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    for(int i=0; i<e; i++)
    {
        int v1, v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    for(int i=0; i<1; i++)
    {
        dfs(g[i]);
    }
}
