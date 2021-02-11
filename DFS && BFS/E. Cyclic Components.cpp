# include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int>adj[200005];
int visited[200005];
int cnt;
int cnt_vertex;
bool done;
void bfs(int s)
{
	queue<int>q;
	q.push(s);
	while(!q.empty())
	{
	int u=q.front();
	q.pop();
	cnt+=adj[u].size();
	if(adj[u].size()!=2) done=false;
	cnt_vertex++;
	visited[u]=true;
	for(int i=0;i<adj[u].size();i++)
	{
		int v=adj[u][i];
		if(!visited[v])
		{
			q.push(v);
			visited[v]=true;
		}
	}
    }
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=1;i<=n;i++) visited[i]=false;
	int res=0;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			done=true;
		    cnt=0;
		    cnt_vertex=0;
		    bfs(i);
			if(done && cnt/2==cnt_vertex) res++;
		}
	}
	cout<<res;
	return 0;
}
