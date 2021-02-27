# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	int k;
	cin>>n>>k;
	int a[n+10];
	for(int i=0;i<n;i++) cin>>a[i];
	int i=0;
	int j=n-1;
	while(1)
	{
		if(a[i]<=k) i++;
		if(a[j]<=k) j--;
		if(i>j || (a[i]>k && a[j]>k)) break;
	}
	//cout<<i<<" "<<j;
	if(i>j) cout<<n;
	else cout<<n-(j-i+1);
	return 0; 
}
