/*HungVoCs47*/
# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		cin>>n;
		char a[55][55];
		for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<n;j++)
	    	{
	    		cin>>a[i][j];
			}
		}
		bool ans=true;
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(a[i][j]=='1')
				{
					if(a[i+1][j]=='1' || a[i][j+1]=='1')
					{
						continue;
					}
					else
					{
						ans=false;
						break;
					}
				}
			}
		}
		if(ans) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
