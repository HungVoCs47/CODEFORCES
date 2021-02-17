# include <bits/stdc++.h>
using namespace std;
const int MAXN=200;
int a[MAXN];
int depths[MAXN];
void find(int l, int r, int d)
{
	if(l>r) return;
	int mx=0;
	int id=0;
	for(int i=l;i<=r;i++)
	{
		if(mx<a[i])
		{
			mx=a[i];
			id=i;
		}
	}
	depths[id]=d;
	find(l,id-1,d+1);
	find(id+1,r,d+1);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	find(1,n,0);
	for(int i=1;i<=n;i++) cout<<depths[i]<<" ";
	cout<<"\n";
    }
	return 0;
}
