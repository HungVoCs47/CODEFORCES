# include <bits/stdc++.h>
using namespace std;
# define fi first
# define se second
# define all(v) v.begin(),v.end()
typedef pair<int,int>ii;
typedef pair<int,ii>iii;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int k;
	cin>>k;
	vector<iii>aa;
	for(int i=0;i<k;i++)
	{
		int n;
		cin>>n;
		int a[200005];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=a[j];
		}
		for(int j=0;j<n;j++)
		{
			aa.push_back(iii(sum-a[j],ii(i,j)));
		}
	}
	sort(all(aa));
	for(int i=0;i<aa.size()-1;i++)
	{
		int trace_1=aa[i].fi;
		int trace_2=aa[i+1].fi;
		if(trace_1==trace_2 && aa[i].se.fi!=aa[i+1].se.fi)
		{
			cout<<"YES\n";
			cout<<aa[i].se.fi+1<<" "<<aa[i].se.se+1<<"\n";
			cout<<aa[i+1].se.fi+1<<" "<<aa[i+1].se.se+1<<"\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
