# include <bits/stdc++.h>
using namespace std;
vector<int>adj[200005];
bool visited[200005];
int d[200005];
int ans[200005]={0};
void bfs()
{
	queue<int>q;
	q.push(1);
	visited[1]=1;
    while(!q.empty())
    {
    	int u=q.front();
    	q.pop();
    	for(int i=0;i<adj[u].size();i++)
    	{
    		int v=adj[u][i];
    		if(visited[v]) continue;
    		{
    			q.push(v);
    			visited[v]=true;
    			d[v]=d[u]+1;
			}
		}
	}
}
int dfs(int u)
{
	visited[u]=true;
	for(int i=0;i<adj[u].size();i++)
	{
		int v=adj[u][i];
		if(d[v]<=d[u]) continue;
		if(!visited[v])
		{
			dfs(v);
		}
		ans[u]=min(ans[v],ans[u]);
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
		}
		memset(visited,false,sizeof(visited));
		memset(ans,0,sizeof(ans));
		memset(d,0,sizeof(d));
		bfs();
		for(int i=1;i<=n;i++)
		{
			ans[i]=d[i];
			for(int j=0;j<adj[i].size();j++)
			{
				int v=adj[i][j];
				ans[i]=min(ans[i],d[v]);
			}
		}
		//for(int i=1;i<=n;i++) cout<<d[i]<<" ";
		memset(visited,false,sizeof(visited));
		dfs(1);
		for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
		cout<<"\n";
		for(int i=0;i<=n;i++) adj[i].clear();
	}
	return 0;
}
