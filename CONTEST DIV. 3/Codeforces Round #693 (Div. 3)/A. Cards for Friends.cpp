# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int w,h,n;
		cin>>w>>h>>n;
		int cnt=1;
	    while(w%2==0)
	    {
	    	cnt*=2;
	    	w/=2;
		}
		while(h%2==0)
		{
			cnt*=2;
			h/=2;
		}
		if(cnt>=n)
		{
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}
	return 0;
}
