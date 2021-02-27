# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int>adj(n+10);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) adj.push_back(i);
	}
	for(int i=0;i<adj.size();i++)
	{
		reverse(s.begin(),s.begin()+adj[i]);
	}
	cout<<s<<"\n";
	return 0;
}
