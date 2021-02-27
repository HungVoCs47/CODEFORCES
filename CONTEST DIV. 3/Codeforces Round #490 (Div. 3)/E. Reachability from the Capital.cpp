# include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
vector<int>adj[10005];
bool visited[10005];
bool used[10005];
int cnt;
void dfs(int s)
{
	visited[s]=true;
	for(int i=0;i<adj[s].size();i++)
	{
		int v=adj[s][i];
		if(!visited[v]) dfs(v);
	}
}
void dfs1(int s)
{
	used[s]=true;
	cnt++;
	for(int i=0;i<adj[s].size();i++)
	{
		int v=adj[s][i];
		if(!visited[v] && !used[v])
		{
			dfs1(v);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m,s;
	cin>>n>>m>>s;
	s--;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		a--;b--;
		adj[a].push_back(b);
	}
	dfs(s);
	vector<ii>dev;
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			cnt=0;
			memset(used,false,sizeof(used));
			dfs1(i);
			dev.push_back(ii(cnt,i));
		}
	}
	sort(dev.begin(),dev.end());
	reverse(dev.begin(),dev.end());
	int ans=0;
	for(int i=0;i<dev.size();i++)
	{
		if(!visited[dev[i].second])
		{
			ans++;
			dfs(dev[i].second);
		}
	}
	cout<<ans<<"\n";
	return 0;
}
