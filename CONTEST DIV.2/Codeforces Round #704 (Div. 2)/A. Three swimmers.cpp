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
		ll p,a,b,c;
		cin>>p>>a>>b>>c;
        if(p%a==0 || p%b==0 || p%c==0)
        {
        	cout<<0<<"\n";
		}
	    else
	    {
	    	cout<<min(a-(p%a),min(b-(p%b),c-(p%c)))<<"\n";
		}
    }
	return 0;
}
