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
		int temp=n;
		int remainder=n%10,cnt=0;
		while(temp>0)
		{
			temp=temp/10;
			cnt++;
		}
		int ans=0;
		for(int i=1;i<remainder;i++)
		{
			ans+=10;
		}
		ans+=cnt*(cnt+1)/2;
		cout<<ans<<"\n";
	}
	return 0;
}
