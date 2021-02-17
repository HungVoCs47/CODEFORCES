# include <bits/stdc++.h>
using namespace std;
# define ll long long 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
		ll n;
		cin>>n;
		bool done=false;
		for(ll i=1;i<=n;i++)
		{
		    ll j=cbrt(n-i*i*i);
		    //cout<<j;
            if(j*j*j+i*i*i==n && j>0) done=true;
			if(done || j*j*j+i*i*i>n) break;
		}
		if(done) cout<<"YES\n";
		else cout<<"NO\n";
   }
   return 0;
}
			
