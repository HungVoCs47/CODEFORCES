# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	string ans;
	char MAX_1='a', MAX_2='a';
	for(int i=0;i<n;i++)
	{
	   if(s[i]>=MAX_1)
	   {
	   	   ans+='0';
	   	   MAX_1=s[i];
	   }
	   else if(s[i]>=MAX_2)
	   {
	   	    ans+='1';
	   	    MAX_2=s[i];
	   }
	   else 
	   {
	   	cout<<"NO\n";
	   	return 0;
	   }
	}
	cout<<"YES\n";
	for(int i=0;i<n;i++) cout<<ans[i];
	return 0;
}
