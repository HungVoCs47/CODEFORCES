/*
    * Author: HungVoCs47
    * Status: AC
*/
# include <bits/stdc++.h>
# define ll long long 
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
		ll sum=0;
		ll a[n+10];
		for(int i=0;i<n;i++)
		{
		  cin>>a[i];
		  sum+=a[i];
	    }
		for(int i=n;i>=1;i--)
		{
			if(sum%i==0)
			{
				ll need_sum=sum/i;
				ll cur_sum=0;
				bool ok=true;
				for(int j=0;j<n;j++)
				{
				     cur_sum+=a[j];
				     if(cur_sum>need_sum)
				     {
				     	ok=false;
				     	break;
					 }
					 else if(cur_sum==need_sum)
					 {
					 	cur_sum=0;
					 }
				}
				if(ok) 
				{
				cout<<n-i<<"\n";
			    break;
			    }
			}
		}
	}
	return 0;
}
