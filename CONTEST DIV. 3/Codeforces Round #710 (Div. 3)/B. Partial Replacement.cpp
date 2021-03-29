# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int res=1;
		int i=s.find_first_of('*');
		while(1)
		{
			int j=min(n-1,i+k);
			for(;i<j and s[j]=='.';j--){}
			if(i==j) break;
			res++;
			i=j;
		}
		cout<<res<<"\n";
	}
	return 0;
}
