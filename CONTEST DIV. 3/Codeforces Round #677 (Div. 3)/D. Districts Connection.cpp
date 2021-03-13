# include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
vector<ii>adj[5005];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int cnt=0;
		cin>>n;
		vector<int>a(n+10);
		for(int i=0;i<n;i++) cin>>a[i];
		int MAXN=*max_element(a.begin(),a.end());
		for(int i=0;i<n;i++)
		{
			if(a[i]==MAXN) cnt++;
		}
	    if(cnt==n)
	    {
	    	cout<<"NO\n";
		}
	    else
	    {
	    	cout<<"YES\n";
	    	int id=a[0];
	    	vector<int>luu_vet;
	    	int trace;
	    	for(int i=1;i<n;i++)
	    	{
	    		if(a[i]!=id)
	    		{
	    			cout<<1<<" "<<i+1<<"\n";
	    			trace=i;
				}
				else
				{
					luu_vet.push_back(i);
				}
			}
			for(int i=0;i<luu_vet.size();i++)
			{
				cout<<trace+1<<" "<<luu_vet[i]+1;
				cout<<"\n";
			}
		}
	}
	return 0;
}
