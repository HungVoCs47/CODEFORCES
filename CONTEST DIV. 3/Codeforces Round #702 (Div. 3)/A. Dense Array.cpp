/*
    * Author: HungVoCs47
    * Status: AC
*/
# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int testcase;
	cin>>testcase;
	while(testcase--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		int ans=0;
		for(int i=0;i<n-1;i++)
		{
			int MIN=min(a[i],a[i+1]);
			int MAX=max(a[i],a[i+1]);
			while(MAX>2*MIN)
			{
				ans++;
			    MIN=2*MIN;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
