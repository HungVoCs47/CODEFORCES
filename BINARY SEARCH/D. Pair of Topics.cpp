# include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n+1];
	long long b[n+1];
	long long c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		c[i]=a[i]-b[i];
	}
	sort(c,c+n);
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		if(c[i]<=0) continue;
		int pos=lower_bound(c,c+n,-c[i]+1)-c;
		ans+=i-pos;
	}
	cout<<ans;
	return 0;
}
