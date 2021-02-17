#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200010];
ll mx[200010];
ll n,m;
ll s[200010];
int main()
{
    int t;
    cin>>t;
    while(t--)
	{
    	cin>>n>>m;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) s[i]=a[i]+s[i-1];
        for(int i=1;i<=n;i++) mx[i]=max(mx[i-1],s[i]);
        while (m--)
		{
	    ll x;
            cin>>x;
            if(s[n]<=0 && mx[n]<x)
			{
				cout<<"-1 ";
				continue;
			}
            ll q;
            if (mx[n]<x) q=(x-mx[n]+s[n]-1)/s[n];
            else q=0;
            ll r=lower_bound(mx+1,mx+n+1,x-q*s[n])-mx-1;
            cout<<q*n+r<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
