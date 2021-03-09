/*
    * Author: HungVoCs47
    * Status: AC
*/
# include <bits/stdc++.h>
using namespace std;
# define ll long long 
const int mod=1e9+7;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll C[200005][120];
	for(int i=0;i<=200000;i++){
		for(int j=0;j<=min(i,105);j++){
			if(i==0||j==0) C[i][j]=1;
			if(i==j) C[i][j]=1;
			else C[i][j]=(C[i-1][j-1]%mod+C[i-1][j]%mod)%mod;
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,k;
		cin>>n>>m>>k;
		ll a[n+10];
		for(ll i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		ll j=1,ans=0;
		for(ll i=1;i<=n;i++)
		{
			while(a[i]+k>=a[j] && j<=n)
			{
				j++;
		    } 
		    j--;
		    {
		    	ans+=C[j-i][m-1];
		    	ans%=mod;
			}
		}
		cout<<ans<<"\n"; 
	}
	return 0;
}
