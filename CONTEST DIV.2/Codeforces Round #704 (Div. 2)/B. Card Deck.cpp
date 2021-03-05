# include <bits/stdc++.h>
using namespace std;
# define fi first
# define se second
typedef pair<int,int>ii;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		priority_queue<ii>pq;
		int n;
		cin>>n;
		int a[200005];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			pq.push(ii(a[i],i));
		}
		int mx=n;
		while(!pq.empty())
		{
			while(!pq.empty() && pq.top().se>mx) pq.pop();
			if(pq.empty()) break;
			for(int i=pq.top().se;i<mx;i++) cout<<a[i]<<" ";
			mx=pq.top().se;
			pq.pop();
		}
		cout<<"\n";
	}
	return 0;
}
