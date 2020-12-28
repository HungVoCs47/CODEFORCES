# include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i=0;
	int j=n-1;
	int mx;
	int k=0;
	int b[n];
	while(j>=i)
	{
		mx=max(a[i],a[j]);
		if(mx==a[j])
		{
			j--;
		}
		else if(mx==a[i])
		{
			i++;
		}
		b[k]=mx;
		k++;
	}
	int sum1=0;
	int sum=0;
	for(int i=0;i<k;i+=2)
	{
		sum1+=b[i];
	}
	for(int i=0;i<k;i++)
	{
		sum+=a[i];
	}
	cout<<sum1<<" "<<sum-sum1;
}
