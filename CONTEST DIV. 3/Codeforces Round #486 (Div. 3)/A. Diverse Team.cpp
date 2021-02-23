/*HungVoCs47*/
# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k;
	cin>>n>>k;
	int a[105];
	int b[105];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) b[i]=a[i];
	sort(a,a+n);
	int t=a[0];
	int cnt=1;
	int luu_vet[105];
	luu_vet[0]=t;
	int j=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]>t) 
		{
		cnt++;
		t=a[i];
		luu_vet[j]=t;
		j++;
	    }
	}
	if(cnt>=k)
	{
	cout<<"YES\n";
	for(int i=0;i<k;i++)
	   for(int k=0;k<n;k++) 
	   {
	   	   if(luu_vet[i]==b[k]) 
			  {
			  cout<<k+1<<" "; 
			  break;
		    }
	   }
    }
	else cout<<"NO"; 
	return 0;
}
