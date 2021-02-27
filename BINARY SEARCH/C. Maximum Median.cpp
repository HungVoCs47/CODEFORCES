# include <bits/stdc++.h>
using namespace std;
# define ll long long 
vector<ll>a;
ll n,k;
bool check(ll nn)
{
	ll moves=0;
	for(int i=n/2;i<n;i++)
	{
		if(nn-a[i]>0) moves+=nn-a[i];
		if(moves>k) return false;
	}
	if(moves<=k) return true;
	else return false;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	ll left=0;
    ll right=1e12;
	while(left!=right)
	{
		ll mid=(left+right+1)/2;
		if(check(mid))
		{
			left=mid;
		}
		else 
		{
			right=mid-1;
		}
	}
	cout<<left;
	return 0;
}
