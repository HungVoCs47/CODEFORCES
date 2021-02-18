# include <bits/stdc++.h>
using namespace std;
const int MAXN=1005;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int x;
	cin>>x;
	string s;
	cin>>s;
	int l=s.length();
	int j=0;
	int count=0;
    for(int i=j;i<l;i++)
    {
    	if(s[i]=='x')
    	{
    		if(s[i+1]=='x' && s[i+2]=='x')
    		{
    			count++;
			}
		}
	}
	cout<<count<<" ";
    return 0;
}
