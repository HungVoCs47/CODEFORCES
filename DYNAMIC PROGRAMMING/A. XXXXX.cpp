# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int z=1;z<=t; z++)
	{
		int n;
	    int x;
	    cin>>n>>x;
	    int a[n+1];
	    for(int i=1;i<=n;i++)
	    {
	    	cin>>a[i];
		}
		int dp[n+1]={0};
		for(int i=1;i<=n;i++)
		{
			dp[i]=dp[i-1]+a[i];
		}
		int dp1[n+1];
	    for(int i=0;i<=n;i++)
	    {
	    	dp1[i]=dp[i]%x;
		}
		 int f=-1e9,b;
	     for(int i=0;i<=n;i++)
	     {
	     	if(dp1[i]!=0)
	     	{
	     		f=i;
	     		break;
			}
	     }
	     for(int i=n;i>=0;i--)
	     {
	     	if(dp1[i]==0)
	     	{
	     		b=i;
	     		break;
			 }
		 }
		 int m=-1e9,l;
		  for(int i=0;i<=n;i++)
	     {
	     	if(dp1[i]==0)
	     	{
	     		m=i;
	     		break;
			}
	     }
	     for(int i=n;i>=0;i--)
	     {
	     	if(dp1[i]!=0)
	     	{
	     		l=i;
	     		break;
			 }
		 }
		 int res=max(abs(f-b),abs(m-l));
		 bool done=true;
		 for(int i=0;i<=n;i++)
		 {
		 	if(dp1[i]!=0)
		 	{
		 		done=false;
			 }
		 }
		 if(!done)
		 cout<<res;
		 else
		 cout<<-1;
		 cout<<endl;
	}
	return 0;
}
