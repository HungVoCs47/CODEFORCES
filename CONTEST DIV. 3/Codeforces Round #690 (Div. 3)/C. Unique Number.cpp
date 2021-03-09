/*
    * Author: HungVoCs47
    * Status: AC
*/
# include <bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		if(x>45)
		{
			cout<<"-1";
		}
        else if(x>=1 && x<=9)
        {
		for(int i=1;i<=9;i++)
		{
			if(x==i) cout<<i<<"\n";
		}
	    }
	    else
	    {
		vector<int>a;
		for(int i=9;i>=0;i--)
		{
			if(x>i)
			{
				x-=i;
				a.push_back(i);
		    }
		    else break;
		}
		    //cout<<a.size()<<"+";
		    a.push_back(x);
			reverse(a.begin(),a.end());
			for(int i=0;i<a.size();i++) cout<<a[i];
			cout<<"\n";
	    }
	}
	return 0;
}
