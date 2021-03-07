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
		vector<int>dp(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=n-1;i>=0;i--)
		{
			dp[i]=a[i];
			int j=a[i]+i;
			if(j<n){
				dp[i]+=dp[j];
			}
        }
		cout<<*max_element(dp.begin(),dp.end())<<"\n";
	}
	return 0;
}
