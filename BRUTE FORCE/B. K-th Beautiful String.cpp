# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int m=1;m<=t;m++)
     {
     	int n;
        long long k;
        cin>>n>>k;
        long long sum=0;
        long long dem=0;
        for(int i=1;i<=n;i++)
        {
        	sum+=i;
            dem++;
        	if(sum>=k)
        	{
               sum-=i;
               break;
			}
		}
		long long temp=k-sum;
		char x[200000];
		for(int i=0;i<n;i++)
		{
			if(i==temp-1 || i==dem)
			{
				x[i]='b';
			}
			else
			{
				x[i]='a';
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			cout<<x[i];
		}
		cout<<endl;
	 }
	return 0;
}
