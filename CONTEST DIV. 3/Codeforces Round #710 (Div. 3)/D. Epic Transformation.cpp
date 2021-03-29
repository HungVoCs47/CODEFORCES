# include <bits/stdc++.h>
using namespace std;
# define ll long long 
const int MAXN=2e5+5;
typedef pair<ll,ll>ii;
void solve()
{
	int n;
	cin>>n;
	ll a[n+10];
	ll counting[MAXN]={0};
	for(int i=0,x;i<n;i++) {
		cin>>a[i];
	}
	sort(a,a+n);
	//for(int i=0;i<n;i++) counting[a[i]]++; 
	//for(int i=0;i<n;i++) cout<<a[i]<<" ";
	priority_queue<ll>pq;
	int i=0;
	int j=0;
	int cnt_1=0;
	while(j<n && i<n)
	{
		if(a[j+1]==a[i])
		{
			j++;
		}
		else
		{
			//cout<<j<<" ";
			pq.push(j-i+1);
			j++;
			i=j;
		}
    }
	ll ans=0;
	ll cnt=0;
	while(pq.size()!=1)
	{
		ll u1=pq.top(); pq.pop();
		ll u2=pq.top(); pq.pop();
		//cout<<u1<<" "<<u2<<"\n";
		if(u1==0 || u2==0)
		{
			break;
		}
		u1--; u2--;
		cnt+=2;
		pq.push(u1);pq.push(u2);
	}
	cout<<n-cnt<<"\n";
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
