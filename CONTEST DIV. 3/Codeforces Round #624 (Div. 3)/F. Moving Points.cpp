# include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
# define ll long long 
# define fi first
# define se second
ll position[MAXN],speed[MAXN];
typedef pair<ll,ll>ii;
ii pairs[MAXN];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>position[i];
	for(int i=0;i<n;i++) cin>>speed[i];
	for(int i=0;i<n;i++) pairs[i]=ii(speed[i],position[i]);
	sort(position,position+n);
	sort(pairs,pairs+n);
	ll ans=0;
	for(int i=0;i<n;i++)
     {
     	ans+=(i+lower_bound(position,position+n,pairs[i].se)-position-n+1)*pairs[i].se;
	 }
	cout<<ans<<" ";
	return 0;
}
