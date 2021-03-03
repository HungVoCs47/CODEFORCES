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
		int n,m;
		cin>>n>>m;
        ll a[200005],b[200005];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        vector<ll>first_type;
        vector<ll>second_type;
        for(int i=0;i<n;i++)
        {
        	if(b[i]==1)
        	{
        		first_type.push_back(a[i]);
			}
			else 
			{
				second_type.push_back(a[i]);
			}
		}
		sort(first_type.begin(),first_type.end());
		sort(second_type.begin(),second_type.end());
		ll s1=0;
		ll s2=0;
		for(int i=0;i<second_type.size();i++)
		{
			s2+=second_type[i];
		}
	    ll pos=0;
	    ll ans=1e9;
	    for(int i=0;i<=first_type.size();i++)
	    {
	    	  if(i>0) s1+=first_type[first_type.size()-i];
			  while(pos<second_type.size() && s1+s2-second_type[pos]>=m)
			  {
		                s2-=second_type[pos];
						pos++;	  	
			  }
			  ll cost=i+(second_type.size()-pos)*2;
			  if(s1+s2>=m)
			  ans=min(ans,cost);	
		}
		if(ans!=1e9) cout<<ans<<"\n";
		else cout<<-1<<"\n";
	}
	return 0;
}
