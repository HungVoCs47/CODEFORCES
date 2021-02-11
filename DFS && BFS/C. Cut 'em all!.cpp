/* HungVoCs47 */
# include <bits/stdc++.h>
using namespace std;
# define ll long long 
vector<int>adj[100005];
int n;
int dist[100005];
int visited[100005];
int ans=0;
int dfs(int s)
{
  visited[s]=true;
  for(int i=0;i<adj[s].size();i++)
  {
  	 int v=adj[s][i];
  	 if(!visited[v])
  	 {
  	 	dist[s]+=dfs(v);
	 }
  }
  if(dist[s]%2==0 && s!=1) ans++;
  return dist[s];
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
	for(int i=1;i<=n;i++) visited[i]=false;
	for(int i=1;i<=n;i++) dist[i]=1;
	if(n%2==1) cout<<-1;
	else 
	{
	dfs(1);
	cout<<ans;
   }
	return 0;
}
