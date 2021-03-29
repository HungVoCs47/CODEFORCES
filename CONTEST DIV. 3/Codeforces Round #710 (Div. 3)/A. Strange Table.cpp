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
		ll n,m,x;
		cin>>n>>m>>x;
		ll temp=x;
		ll row;
		if(x%n==0) row=n;
		else row=x%n;
		ll collumn;
		if(x%n==0) collumn=x/n;
		else collumn=x/n+1;
		ll ans=m*(row-1)+(collumn);
		cout<<ans<<"\n";
   }
   return 0;
} 
