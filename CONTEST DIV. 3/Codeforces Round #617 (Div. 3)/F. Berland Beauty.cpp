# include <bits/stdc++.h>
using namespace std;
# define fi first 
# define se second
int father[6005];
int depth[6005];
int cnt[6005],num[6005],ans[6005];
const int INF=1e6;
typedef pair<int,int>pii;
vector<pii>adj[6005];
int n,m;
struct Edge{
  	int u,v,w;
	Edge(int u=0,int v=0,int w=0):u(u),v(v),w(w){
	}
}p[6005];
bool cmd(Edge a, Edge b)
{
	return a.w>b.w;
}
void dfs(int u, int f)
{
     father[u]=f;
	 depth[u]=depth[f]+1;
	 for(int i=0;i<adj[u].size();i++)
	 {
	 	pii v=adj[u][i];
	 	if(v.fi==f) continue;
	 	dfs(v.fi,u);
	 	cnt[v.fi]=v.se;
	 }	
}
bool check(int u, int v, int w)
{
	int minn=INF;
	if(depth[u]<depth[v]) swap(u,v);
	while(depth[u]!=depth[v])
    {
    	if(num[u]==INF) num[u]=w;
    	minn=min(minn,num[u]);
    	u=father[u];
	}
	while(u!=v)
	{
		if(num[u]==INF) num[u]=w;
		minn=min(minn,num[u]);
		u=father[u];
		if(num[v]==INF) num[v]=w;
		minn=min(minn,num[v]);
		v=father[v];
	}
	return minn==w;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(pii(v,i));
		adj[v].push_back(pii(u,i));
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		p[i]=Edge(u,v,w);
	}
	dfs(1,0);
	for(int i=1;i<=n;i++) num[i]=INF;
	sort(p,p+m,cmd);
	for(int i=0;i<m;i++)
	{
		if(!check(p[i].u,p[i].v,p[i].w)){
			cout<<-1;
			return 0;
	}
    }
    for(int i=2;i<=n;i++) ans[cnt[i]]=num[i];
    for(int i=1;i<n;i++) cout<<ans[i]<<" ";
	return 0;
}
