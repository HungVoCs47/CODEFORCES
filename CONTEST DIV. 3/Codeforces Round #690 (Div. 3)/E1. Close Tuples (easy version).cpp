# include <bits/stdc++.h>
using namespace std;
# define ll long long 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n+10];
		for(ll i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		ll ans=0;
		int j=1;
		for(ll i=1;i<=n;i++)
		{
		      while(a[i]+2>=a[j] && j<=n)
		      {
		      	j++;
			  }
			  j--;
			  //cout<<j<<" ";
			  if(j-i>=2)
			  ans+=(j-i)*(j-i-1)/2;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
