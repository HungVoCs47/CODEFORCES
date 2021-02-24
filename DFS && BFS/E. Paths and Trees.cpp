# include <bits/stdc++.h>
using namespace std;
# define fi first
# define se second
# define all(v) v.begin(),v.end()
# define ll long long 
const ll oo=1e18+8;
const int MAXN=3e5+5;
typedef pair<ll,ll>ii;
typedef pair<ll,ii>iii;
vector<iii>adj[MAXN];
ll d[MAXN];
vector<ll>luu_vet_id[400000];
ll aaa[MAXN];
ll n,m;
bool cmd(int a,int b)
{
	return aaa[a]<aaa[b];
}
ll prime(int starting)
{
    for(int i=1;i<=n;i++) 
	{
	  d[i]=oo;
    }
	d[starting]=0;
	priority_queue<iii,vector<iii>,greater<iii> >pq;
	pq.push(iii(0,ii(starting,0)));
	while(!pq.empty())
	{
		ll du=pq.top().fi;
		ll u=pq.top().se.fi;
		ll id_1=pq.top().se.se;
		pq.pop();
		if(d[u]!=du) continue;
		//cout<<u<<" ";
	    luu_vet_id[u].push_back(id_1);
		for(int i=0;i<adj[u].size();i++)
		{
			ll v=adj[u][i].fi;
			ll uv=adj[u][i].se.fi;
			ll id_2=adj[u][i].se.se;
			if(d[v]>=uv+du)
			{
				if(d[v]>uv+du)
				{
				d[v]=uv+du;
				pq.push(iii(d[v],ii(v,id_2)));
				}
				else
				{
					luu_vet_id[v].push_back(id_2);
				}
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
    	int a,b,w;
    	cin>>a>>b>>w;
    	adj[a].push_back(iii(b,ii(w,i)));
    	adj[b].push_back(iii(a,ii(w,i)));
    	aaa[i]=w;
	}
	ll starting;
	cin>>starting;
	//cout<<starting<<" ";
    prime(starting);
	//for(int i=1;i<=n;i++) cout<<luu_vet_id[i].size();
	ll min_cost=0;
	for(int i=1;i<=n;i++)
	{
		sort(all(luu_vet_id[i]),cmd);
	}
	for(int i=1;i<=n;i++)
	{
		if(luu_vet_id[i].size()!=0)
		{
		min_cost+=aaa[luu_vet_id[i][0]];
		}
	}
	cout<<min_cost<<"\n";
	for(int i=1;i<=n;i++)
	{
		if(luu_vet_id[i].size()!=0 && luu_vet_id[i][0]!=0) cout<<luu_vet_id[i][0]<<" ";
	}
	//for(int i=1;i<=n;i++) cout<<d[i]<<" ";
	return 0;
}
