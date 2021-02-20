/*HungVoCs47*/
# include <bits/stdc++.h>
using namespace std;
const int MAXN=1005;
typedef pair<int,int>ii;	
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int a[MAXN]={0};
	int mang_luu_dau[n+1];
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		mang_luu_dau[i]=x;
		a[x]++;
	}
	int count=0;
	int MAX=-1e3;
	int luu_vet;
	vector<int>v;
	for(int i=0;i<MAXN;i++)
	{
		if(a[i]!=0)
		{
			count++;
		}
	}
    cout<<count<<"\n";
    for(int i=n-1;i>=0;i--)
    {
    	if(a[mang_luu_dau[i]]!=0)
    	{
    	    v.push_back(mang_luu_dau[i]);
    		a[mang_luu_dau[i]]=0;
		}
	}
	for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
	return 0;
}
