/*
    * Author: HungVoCs47
    * Status: AC
*/
# include <bits/stdc++.h>
using namespace std;
# define ll long long 
	vector<ll>adj[100005];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	int a[n+1];
    vector<ll>v;
	for(int i=0;i<n;i++) cin>>a[i],v.push_back(a[i]);
	sort(v.begin(),v.end());
	//for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    int luu_vet[n+1];
    int j=0;
	for(int i=0;i<n;i++)
	{
		int t=lower_bound(v.begin(),v.end(),a[i])-v.begin();
		luu_vet[j]=t;
		j++;
	}
	//for(int i=0;i<n;i++) cout<<luu_vet[i]<<" ";
	for(int i=0;i<m;i++)
	{
		int aa,bb;
		cin>>aa>>bb;
		aa--;bb--;
		if(a[aa]>a[bb]) 
		{
		  luu_vet[aa]--;
		  if(luu_vet[aa]<0) luu_vet[aa]=0;
	    }
		else if (a[aa]<a[bb])
		{
		luu_vet[bb]--;
		if(luu_vet[bb]<0) luu_vet[bb]=0;
	    }
	}
	for(int i=0;i<n;i++) cout<<luu_vet[i]<<" ";
	return 0;
}
