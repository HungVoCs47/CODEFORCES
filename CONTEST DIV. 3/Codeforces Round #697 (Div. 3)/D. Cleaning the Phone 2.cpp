#include <bits/stdc++.h>
using namespace std;
# define ll long long 
const int INF=1e9;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<ll>arr(n),a,b;
		a.push_back(0);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0,x;i<n;i++) {
			cin>>x;
			if(x==1)
				a.push_back(arr[i]);
			else
				b.push_back(arr[i]);
		}
		sort(a.begin()+1,a.end(),greater<ll>());;
		sort(b.begin(),b.end(),greater<ll>());
		for(int i=1;i<a.size();i++)
			a[i]+=a[i-1];
		int res=0,ans=INF;
		for(int i=0;i<=b.size();i++) {
			if(i){
				res+=2;
				m-=b[i-1];
			}
			int it=lower_bound(a.begin(),a.end(),m)-a.begin();
			if(it!=a.size())
				ans = min(ans,res+it);
		}
		if(ans == INF)
			cout << "-1\n";
		else
			cout << ans << '\n';
	}
}
