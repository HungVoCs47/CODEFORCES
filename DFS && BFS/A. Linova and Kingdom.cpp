/* HungVoCs47 */
# include <bits/stdc++.h>
using namespace std;
# define ll long long int
typedef pair<ll,ll>ii;
vector<ll>adj[300005];
ll n,m;
ll res=0;
ll dist[300005],child[300005],tourist[300005];
ll visited[300005]={0};
vector<pair<ll,ll> >vp;
ll dfs(ll s)
{
     visited[s]=1;
     for(int i=0;i<adj[s].size();i++)
     {
     	ll u=adj[s][i];
     	if(visited[u]==0)
     	{
     		dist[u]=dist[s]+1;
     		child[s]+=dfs(u);
		 }
	 }
	 return child[s]+1;
}
ll dfs2(int s)
{
	ll luu_vet=0;
	visited[s]=1;
	for(int i=0;i<adj[s].size();i++)
	{
		ll u=adj[s][i];
		if(visited[u]==0) luu_vet+=dfs2(u);
	}
	if(tourist[s]==0) luu_vet++;
	else res+=luu_vet;
	return luu_vet;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>n>>m;
	m=n-m;
	for(int i=1;i<=n-1;i++)
	{
		ll a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(1);
	for(int i=1;i<=n;i++)
	{
		vp.push_back(ii(dist[i]-child[i]-1,i));
	}
	sort(vp.begin(),vp.end());
	for(int i=0;i<vp.size();i++)
	{
		if(m==0) break;
		tourist[vp[i].second]=1;
		m--;
	}
	for(int i=1;i<=n;i++) visited[i]=0;
	ll d=dfs2(1);
	cout<<res<<"\n";
	return 0;
}

