/*
    * Author: HungVoCs47
    * Status: AC
*/
# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		bool done=false;
		int n;
		cin>>n;
		string s;
		cin>>s;
		int delta=n-4;
		for(int i=0;i<n;i++)
		{
			char year[200005];
			int k=0;
			for(int j=0;j<i;j++)
			{
				year[k]=s[j];
				k++;
			}
			for(int j=i+delta;j<n;j++)
			{
				year[k]=s[j];
				k++;
			}
			if(year[0]=='2' && year[1]=='0' && year[2]=='2' && year[3]=='0')
			{
				done=true;
				break;
			}
		}
		if(done) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
