# include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[N]={0};
		int dp[N]={0};
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			a[x]++;
		}
		for(int i=1;i<N;i++)
		{
			dp[i]+=a[i];
			for(int j=2*i;j<N;j+=i)
			{
				dp[j]=max(dp[j],dp[i]);
			}
		}
		cout<<n-*max_element(dp,dp+N)<<"\n";
	}
	return 0;
}
