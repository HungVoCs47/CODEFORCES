/*
    * Author: HungVoCs47
    * Status: AC
*/
# include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
# define ll long long 
# define all(v) v.begin(),v.end() 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	    cin>>n;
	    vector<ii>a(n);
		vector<int>l(n),r(n);
	    for(int i=0;i<n;i++)
	    {
	    	cin>>l[i]>>r[i];
	    	a[i].first=l[i];
	    	a[i].second=r[i];
	    }
	    sort(all(l));
	    sort(all(r));
	    int ans=1e9;
	    for(int i=0;i<n;i++)
	    {
	    	ii e=a[i];
	    	int L=e.first;
	    	int R=e.second;
	    	int left=lower_bound(all(r),L)-r.begin();
	    	int right=max(0,n-(int)(upper_bound(all(l),R)-l.begin()));
	    	ans=min(ans,left+right);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
