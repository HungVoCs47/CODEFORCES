# include <bits/stdc++.h>
using namespace std;
# define ll long long
# define _io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef pair<ll,ll>ii;
void solve()
{
		ll n,c;
		cin>>n>>c;
		ll a[n+10],b[n+10];
		for(ll i=1;i<=n;i++) cin>>a[i];
		for(ll i=1;i<=n-1;i++) cin>>b[i];
		ll cost_day[n+10]={0};
		vector<ii>ans;
		ans.push_back(ii(-1,0));
		ll cost=0;
		ll cost_1[n+10];
		ll temp=b[1]-cost;
		ll u=(b[1]-cost)/a[1];
		if((b[1]-cost)%a[1]!=0) u+=1;
		if(temp<=0) u=0;
		cost_day[1]=u+cost_day[0];
		ans.push_back(ii(cost_day[1],cost));
		cost+=u*a[1]-b[1];
		for(ll i=2;i<=n-1;i++)
		{
			ll temp=b[i]-cost;
			ll u=(b[i]-cost)/a[i];
			if((b[i]-cost)%a[i]!=0) u+=1;
			if(temp<=0) u=0; 
			cost_day[i]=u+cost_day[i-1]+1;
			//cost_1[i]=cost;
			//cout<<cost<<" ";
			//cost_day[i]+=1;
			ans.push_back(ii(cost_day[i],cost));
			cost+=u*a[i]-b[i];
		}
		cost_day[n]=cost_day[n-1]+1;
		ans.push_back(ii(cost_day[n],cost));
		//for(int i=1;i<=n;i++) cout<<cost_day[i]<<" ";
		ll res=1e18;
		//for(int i=0;i<ans.size();i++)
		//{
		//   cout<<ans[i].first<<" "<<ans[i].second;
		//   cout<<"\n";
		//}
	    for(ll i=1;i<=n;i++)
	    {
	    	ll r=0;
	    	ll temp=c-ans[i].second;
	    	if(temp%a[i]!=0) r+=1;
	    	if(temp<=0) temp=0;
	    	res=min(res,ans[i-1].first+1+(temp)/a[i]+r);
	    	//cout<<res<<" ";
        }
		cout<<res<<"\n";
}
int main()
{
	_io;
	int t;
	cin>>t;
	while(t--)
	{
	  solve();
	}
	return 0;
}
