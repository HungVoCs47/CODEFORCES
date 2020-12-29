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
	int q;
	cin>>q;
	int b[q+1];
	for(int i=0;i<q;i++)
	{
		cin>>b[i];
	}
    sort(a,a+n);
    for(int i=0;i<q;i++)
    {
    	int t=upper_bound(a,a+n,b[i])-a;
    	if(a[t]==b[i])
    	{
    		cout<<t+1;
		}
		else
		{
			cout<<t;
		}
		cout<<endl;
	}
	return 0;
}
