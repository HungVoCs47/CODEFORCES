# include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
#define ll long long
#define endl cout<<"\n"
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vp vector<ii>
#define sort_increase(a,n) sort(a,a+n)
#define sort_decrease(a,n) sort(a,a+n,greater<int>())
#define all(a) a.begin(),a.end()
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop0(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<=n;i++)
const int M=1e9+7;
const int N=3e5+10;
const int MOD=1e9+7;
void solve()
{
	ll n;
	cin>>n;
    ll a[n+10];
    ll sum=0;
    for(int i=1;i<=n+2;i++)
    {
    	cin>>a[i];
    	sum+=a[i];
	}
	sort(a+1,a+n+3);
	// first case
	if((sum-a[n+2])%MOD==(2*a[n+1])%MOD)
	{
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<"\n";
	}
	else if((sum-a[1])%MOD==(2*a[n+2])%MOD)
	{
		for(int i=2;i<=n+1;i++) cout<<a[i]<<" ";
		cout<<"\n";
	}
	else
	{
		ll prefix[n+5]={0};
		for(int i=1;i<=n+2;i++)
		{
			prefix[i]=prefix[i-1]+a[i];
		}
		int check=-1;
		for(int i=2;i<=n+1;i++)
		{
			ll temp1=prefix[i-1];
			ll temp2=prefix[n+2]-prefix[i];
			temp2-=a[n+2];
			if((temp1+temp2)%MOD==(a[n+2])%MOD)
			{
				check=i;
			}
		}
	//	cout<<"*"<<check<<"*"<<"\n";
		if(check==-1) cout<<"-1\n";
		else
		{
			for(int i=1;i<=n+1;i++)
			{
				if(i!=check) cout<<a[i]<<" ";
			}
			cout<<"\n";
		}
	}
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
