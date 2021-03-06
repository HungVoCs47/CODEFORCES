# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	int a,b,k;
	cin>>a>>b>>k;
	int t=a+b-1;
	for(int i=0;i<b;i++) s+='1';
	for(int i=0;i<a;i++) s+='0';
	bool done=false;
	int i=1;
	while(1)
	{
		if((s[i]=='1' && s[i+k]=='0') || k==0)
		{
			done=true;
			break;
		}
		i++;
		if(s[i]==0 || i+k>t) break;
	}
	if(!done) cout<<"NO\n";
	else 
	{
		cout<<"YES\n";
		cout<<s<<"\n";
		swap(s[i],s[i+k]);
		cout<<s<<"\n";
	}
	return 0;
}
