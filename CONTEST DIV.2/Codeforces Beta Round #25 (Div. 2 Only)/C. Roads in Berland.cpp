# include <bits/stdc++.h>
using namespace std;
# define fi first
# define se second
const int MAXN=305;
const int INF=1e9;
typedef pair<int,int>ii;
vector<ii>adj[100005];
int d[100005];
int n;
int dijkstra(int s)
{
	int cnt=0;
	for(int i=1;i<=1000;i++) d[i]=INF;
	priority_queue<ii,vector<ii>,greater<ii> >pq;
 	d[s]=0;
 	pq.push(ii(0,s));
 	while(!pq.empty())
 	{
 	      int du=pq.top().fi;
		  int u=pq.top().se;
		  pq.pop();
		  if(d[u]!=du) continue;
		  //cout<<u<<"*"<<du<<"*"<<" ";
		  cnt+=du;
		  for(int i=0;i<adj[u].size();i++)
		  {
		  	int v=adj[u][i].fi;
		  	int uv=adj[u][i].se;
		  	//cout<<uv;
		  	if(d[v]>du+uv)
		  	{
		  		d[v]=du+uv;
		  		pq.push(ii(d[v],v));
			}
		  }
	}
	return cnt;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int matrix[305][305];
	int luu_vet[305][305];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>matrix[i][j];
			//cout<<matrix[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			adj[i].push_back(ii(i,matrix[i][j]));
			adj[j].push_back(ii(i,matrix[i][j]));
			//cout<<matrix[i][j];
		}
	}
	int k;
	cin>>k;
	int min_cost;
	int pre_cost;
	for(int m=1;m<=k;m++)
	{
		min_cost=0;
		int a,b,w;
		cin>>a>>b>>w;
		if(matrix[a][b]<=w && m>=2)
		{
			min_cost=pre_cost;
		}
		else
		{
		//matrix[a][b]=w;
		//matrix[b][a]=w;
		//for(int i=1;i<=n;i++) adj[i].clear();
		//for(int i=1;i<=n;i++)
	       //for(int j=1;j<=n;j++)
	       //{
	       	 adj[a].push_back(ii(b,w));
	       	 adj[b].push_back(ii(a,w));
		   //}
		for(int i=1;i<=n;i++)
		{
			min_cost+=dijkstra(i);
			/*for(int j=i;j<=n;j++)
			{
				//cout<<d[j]<<" ";
			  if(d[j]!=INF) min_cost+=d[j];
		    }*/
		}
	    }
		pre_cost=min_cost;
		cout<<min_cost/2<<" ";
	}
	return 0;
}
