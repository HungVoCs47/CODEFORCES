# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k;
	int t[250]={0};
	string s;
	cin>>n>>k;
	string q;
	cin>>s;
	q=s;
	sort(q.begin(),q.end());
	for(int i=0;i<k;i++)
	{
		t[q[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(t[s[i]]) t[s[i]]--;
		else cout<<s[i];
	}
	return 0;
}
