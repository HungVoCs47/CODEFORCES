# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int nn[105];
		int aa[105];
		int mm[105];
		for(int i=1;i<=n;i++) cin>>nn[i],aa[i]=nn[i];
		for(int i=0;i<m;i++) cin>>mm[i];
		while(1)
		{
		bool done=true;
		for(int i=0;i<m;i++)
		{
			if(nn[mm[i]]>nn[mm[i]+1])
			{
			     swap(nn[mm[i]],nn[mm[i]+1]);
			     done=false;
            }
		}
		   if(done) break;
	    }
	    sort(aa+1,aa+n+1);
	    bool done=true;
	    //for(int i=1;i<=n;i++) cout<<nn[i]<<" ";
	    for(int i=1;i<=n;i++) if(aa[i]!=nn[i])
	    {
	    	done=false;
	    	break;
		}
	    if(done) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
