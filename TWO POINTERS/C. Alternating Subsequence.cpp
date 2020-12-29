# include <bits/stdc++.h>
using namespace std;
bool check(long long a, long long b)
{
	if((a>0 && b>0)||(a<0 && b<0)) return true;
	return false;
}
int main()
{
	int t;
	cin>>t;
	for(int m=1;m<=t;m++)
	{
		int n;
		cin>>n;
		long long a[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long sum=0;
		long long j=0;
		for(long long i=0;i<n;)
		{
		    long long res=a[i];
			while(j<n && check(a[i],a[j]))
			{
				res=max(res,a[j]);
				j++;
			}
			sum+=res;
			i=j;
		}
		cout<<sum;
		cout<<endl;
	}
	return 0;
}
