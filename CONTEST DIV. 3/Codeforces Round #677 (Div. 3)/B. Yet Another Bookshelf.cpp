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
		int a[n+10];
		for(int i=1;i<=n;i++) cin>>a[i];
		int i=1;
		int j=1;
		int cnt=0;
		vector<int>aa;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==1) aa.push_back(i);
		}
		//for(int i=1;i<aa.size();i++) cout<<aa[i]<<" ";
		//cout<<"\n";
		for(int i=1;i<aa.size();i++) cnt+=aa[i]-aa[i-1]-1;
		cout<<cnt<<"\n";
	}
	return 0;
}
