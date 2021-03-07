# include <bits/stdc++.h>
# define ll long long 
using namespace std;
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
		ll sum=0;
		for(ll i=0;i<n;i++) 
		{
		 cin>>a[i];
		 sum+=a[i];
	    }
		sort(a,a+n);
		ll sum_alice=0;
		ll sum_bob=0;
	    for(int i=n-1;i>=0;i-=2)
	    {
	    	if(a[i]%2==0) sum_alice+=a[i];
		}
		for(int i=n-2;i>=0;i-=2)
		{
			if(a[i]%2==1) sum_bob+=a[i];
		}
		if(sum_bob==sum_alice) cout<<"Tie\n";
		else if(sum_bob>sum_alice) cout<<"Bob\n";
		else cout<<"Alice\n";
	}
	return 0;
}
