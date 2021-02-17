# include <bits/stdc++.h>
using namespace std;
# define ll long long
const int MAXN=2e5+5;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	ll a[MAXN];
	vector<ll>v(n),prefix_sum(n);
	set<int>win;
	for(int i=0;i<n;i++) 
	{
	    cin>>a[i];
	    v[i]=a[i];
    }
    sort(v.begin(),v.end());
    prefix_sum[0]=v[0];
    for(int i=1;i<n;i++)
    {
    	prefix_sum[i]=v[i]+prefix_sum[i-1];
	}
	ll lowest=v.back();
	win.insert(lowest);
	for(int i=n-2;i>=0;i--)
	{
		ll x=v[i];
		if(prefix_sum[upper_bound(v.begin(),v.end(),x)-v.begin()-1]>=lowest)
		lowest=x;
		win.insert(lowest);
	}
	vector<ll>print;
	for(int i=0;i<n;i++)
	{
		if(win.count(a[i]))
		{
			print.push_back(i+1);
		}
	}
	cout<<print.size()<<"\n";
	for(int i=0;i<print.size();i++)
	   cout<<print[i]<<" ";
	   cout<<"\n";
    }
	return 0;
}
