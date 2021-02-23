/*HungVoCs47*/
# include <bits/stdc++.h>
# define ll long long 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	ll a[n+10];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	bool done=false;
	for(int i=0;i<=32;i++)
	{
		for(int j=0;j<n;j++)
		{
			int t=lower_bound(a,a+n,a[j]+pow(2,i))-a;
			if(a[t]-a[j]==pow(2,i))
			{
				int f=lower_bound(a,a+n,a[t]+pow(2,i))-a;
			    if(a[f]-a[t]==pow(2,i))
			    {
			    	cout<<"3\n";
			    	cout<<a[j]<<" "<<a[t]<<" "<<a[f];
                    return 0;
				}
			}
		}
	}
	for(int i=0;i<=32;i++)
	{
		for(int j=0;j<n;j++)
		{
			int t=lower_bound(a,a+n,a[j]+pow(2,i))-a;
			if(a[t]-a[j]==pow(2,i))
			{
				cout<<"2\n";
				cout<<a[t]<<" "<<a[j];
                return 0;
			}
	    }
	}
    for(int i=0;i<=32;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(abs(a[j])==pow(2,i))
			{
				cout<<"1\n";
				cout<<a[j]<<" ";
				return 0;
			}
		}
	}
	if(n){
	cout<<"1\n";
	cout<<a[0];
	return 0;
}
	return 0;
}
