# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+10];
		for(int i=1;i<=n;i++) cin>>a[i];
		int t;
		if(n%2==1) t=n/2+1;
		else t=n/2;
		int luu_vet[n+10];
		int k=0;
		for(int i=1;i<=t;i++)
		{
			luu_vet[k]=a[i];
			k+=2;
		}
		k=1;
		for(int i=n;i>t;i--)
		{
			luu_vet[k]=a[i];
			k+=2;
		}
		for(int i=0;i<n;i++) cout<<luu_vet[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
