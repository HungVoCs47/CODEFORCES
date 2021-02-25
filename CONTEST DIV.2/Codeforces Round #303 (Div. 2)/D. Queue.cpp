# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int a[100005];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int cnt=0;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=sum)
		{
			sum+=a[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
