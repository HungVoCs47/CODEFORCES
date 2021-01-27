/* HungVoCs47 */
# include <bits/stdc++.h>
using namespace std;
# define ll long long int
vector<ll>adj[300005];
ll dist[300005]={0}; 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	int m;
	cin>>n>>m;
	for(int i=1;i<100005;i++)
	{
		if(i-1>=1 && i-1<100005)
		{
			adj[i].push_back(i-1);
	    }
		if(2*i>=1 && 2*i<100005)
		{
			adj[i].push_back(2*i);
	   }
	}
	queue<int>q;
	q.push(n);
	dist[n]=0;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int i=0;i<adj[u].size();i++)
		{
			if(dist[adj[u][i]]==0)
			{
			q.push(adj[u][i]);
			dist[adj[u][i]]=dist[u]+1;
			}
		}
	}
	cout<<dist[m]<<"\n";
	return 0;
}
