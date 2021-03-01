# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		int cnt_1=0;
		int cnt_2=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==1) cnt_1++;
		}
        if(cnt_1==n && n%2==0) 
		{
		  cout<<"NO\n";
	    }
	    else if(cnt_1!=0) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
