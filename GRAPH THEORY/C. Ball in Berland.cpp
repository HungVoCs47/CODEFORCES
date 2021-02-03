# include <bits/stdc++.h>
using namespace std;
const int MAXN=2e5+7;
int m[MAXN],f[MAXN];
int male[MAXN],female[MAXN];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,k;
		cin>>a>>b>>k;
		for(int i=1;i<=a;i++) m[i]=0;
	    for(int i=1;i<=b;i++) f[i]=0;
	    for(int i=1;i<=k;i++)
	    {
	    	cin>>male[i];
	    	m[male[i]]++;
		}
		for(int i=1;i<=k;i++)
	    {
	    	cin>>female[i];
	    	f[female[i]]++;
		}
		long long res=0;
		for(int i=1;i<=k;i++)
		{
			res+=k-m[male[i]]-f[female[i]]+1;
		}
		cout<<res/2<<"\n";
	}
	return 0;
}
