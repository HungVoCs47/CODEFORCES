# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
		cin>>n;
		int ans=0;
		int ll=1e9;
	   while(n>0)
	   {
	   	  while(n<ll) ll=ll/10;
	   	  ans+=ll;
	   	  n-=ll-ll/10;
	   }
	   cout<<ans<<"\n";
	}
	return 0;
}
