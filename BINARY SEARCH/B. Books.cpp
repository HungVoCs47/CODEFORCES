# include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int t;
	cin>>n>>t;
	int a[n+2];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int prefix_sum[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		prefix_sum[i]=prefix_sum[i-1]+a[i];
	}
	int res=-1e9;
	for(int i=0;i<=n;i++)
	{
		int luu_vet=lower_bound(prefix_sum,prefix_sum+n+1,prefix_sum[i]-t)-prefix_sum;
		res=max(res,i-luu_vet);
	}
	cout<<res;
	return 0;
}

