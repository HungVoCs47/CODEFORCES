# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s,t,p;
	cin>>s>>t;
	int l=s.length();
	int cnt=0;
	bool f=true;
	for(int i=0;i<l;i++)
	{
		if(s[i]!=t[i])
		{
			cnt++;
			if(f)
			{
				p+=s[i];
			    f=false;
			}
			else
			{
				p+=t[i];
				f=true;
			}
		}
		else 
		{
			p+=s[i];
		}
	}
	if(cnt%2) cout<<"impossible\n";
	else cout<<p;
	return 0;
}
