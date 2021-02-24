#include<bits/stdc++.h>
using namespace std;
const int MAXN=309;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int dis[MAXN][MAXN],n,k;
	cin>>n;
	for(int i=0;i<n;i++) 
	    for(int j=0;j<n;j++)  
		    cin>>dis[i][j];
	cin>>k;
	for (int i=0;i<k;i++) 
	{
		int u,v,w;
		cin>>v>>u>>w;
		v--,u--;
		long long ans=0;
		for (int i=0;i<n;i++)
			for (int j=0;j<n;j++)
			{
				dis[i][j]=min(dis[i][j],min(dis[i][v]+w+dis[u][j],dis[i][u]+w+dis[j][v]));
				ans+=dis[i][j];
			}
		cout<<ans/2<<" ";
	}
}
