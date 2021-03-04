# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		int A,B,C;
		cin>>a>>b>>c;
		int ans=1e9;
		for(int i=1;i<=5*a;i++)
		{
			for(int j=i;j<=5*b;j+=i)
			{
				for(int k=0;k<=5;k++)
			    {
			    	int aaa=j*(c/j)+k*j;
			    	int delta=abs(i-a)+abs(j-b)+abs(aaa-c);
			    	if(delta<ans)
			    	{
			    		ans=delta;
			    		A=i;
			    		B=j;
			    		C=aaa;
					}
				}
			}
		}
		cout<<ans<<"\n";
		cout<<A<<" "<<B<<" "<<C<<"\n";
	}
	return 0;
}
