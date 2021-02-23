# include <bits/stdc++.h>
using namespace std;
# define ll long long
# define all(v) v.begin(),v.end()
const int MAXN=300005;
vector<int>adj[MAXN];
int children[MAXN];
bool visited[MAXN];
int a[MAXN];
int b[MAXN];
int n;
void bfs()
{
	for(int i=1;i<=n;i++) visited[i]=false;
	queue<int>q;
	q.push(1);
	int step=1;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		if(visited[u]) continue;
		//cout<<u<<" ";
		visited[u]=true;
		children[u]=step;
		step++;
		for(int i=0;i<adj[u].size();i++)
		{
			int v=adj[u][i];
			if(!visited[v]) 
			{
				q.push(v);
			}
		}
	}
}
bool cmd(int x, int y)
{
	return b[x]<b[y];
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
	sort(all(adj[i]),cmd);
	bfs();
	bool ok=true;
	for(int i=1;i<=n;i++)
	{
		    //cout<<b[i]<<" ";
			if(children[i]!=b[i])
			{
				ok=false;
                break;
			}
	}
	if(ok) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
