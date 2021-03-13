 /*
    * Author: HungVoCs47
    * Status: AC
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int MAXN=1005,INF=1e9;
int a[MAXN],b[MAXN],dist[MAXN][MAXN];
vector<pii> adj[MAXN];
priority_queue<pii,vector<pii>,greater<pii> > PQ;
 
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m,k,u,v,w;
	cin >> n >> m >> k;
	for(int i=1;i<=m;i++){
		cin >> u >> v >> w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}
	for(int i=1;i<=k;i++){
		cin >> a[i] >> b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)dist[i][j]=INF;
		dist[i][i]=0;
		PQ.push({0,i});
		while(!PQ.empty()){
			pii now=PQ.top();
			PQ.pop();
			if(dist[i][now.second]<now.first)continue;
			for(auto nxt : adj[now.second]){
				if(dist[i][now.second]+nxt.second<dist[i][nxt.first]){
					dist[i][nxt.first]=dist[i][now.second]+nxt.second;
					PQ.push({dist[i][nxt.first],nxt.first});
				}
			}
		}
	}
	int ans=INF;
	for(int i=1;i<=n;i++){
		for(auto isi : adj[i]){
			if(i>isi.first)continue;
			int ret=0;
			for(int j=1;j<=k;j++){
				int sini=dist[a[j]][b[j]];
				sini=min(sini,dist[a[j]][i]+dist[isi.first][b[j]]);
				sini=min(sini,dist[b[j]][i]+dist[isi.first][a[j]]);
				ret+=sini;
			}
			ans=min(ans,ret);
		}
	}
	cout << ans << '\n';
	return 0;
}
