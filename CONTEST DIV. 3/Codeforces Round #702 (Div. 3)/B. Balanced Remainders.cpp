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
		int c[3]={0,0,0};
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			c[x%3]++;
		}
		int res=0;
		while(1)
		{
			for(int i=0;i<3;i++)
			{
				if(c[i]>n/3)
				{
					int diff=c[i]-n/3;
					c[(i+1)%3]+=diff;
					res+=diff;
					c[i]-=diff;
				}
			}
			bool stop=1;
			for(int i=0;i<3;i++)
			{
				if(c[i]!=n/3) stop=0;
			}
			if(stop) break;
		}
		cout<<res<<"\n";
	}
	return 0;
}
