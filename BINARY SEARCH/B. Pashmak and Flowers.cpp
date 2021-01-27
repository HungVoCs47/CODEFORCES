/* HungVoCs47 */
# include <bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll max=a[n-1]-a[0];
	ll count1=0;
	ll count2=0;
	for(int i=0;i<=n-1;i++)
	{
		if(a[i]==a[0])
		{
			count1++;
		}
		if(a[i]==a[n-1])
		{
			count2++;
		}
	}
	if(n==2) cout<<max<<" "<<1; 
	else if(count1==count2 && count1==n) cout<<max<<" "<<((n)*(n-1))/2;
	else
	cout<<max<<" "<<count1*count2;
	return 0;
}
