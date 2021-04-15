# include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
#define ll long long
#define endl cout<<"\n"
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vp vector<ii>
#define sort_increase(a,n) sort(a,a+n)
#define sort_decrease(a,n) sort(a,a+n,greater<int>())
#define all(a) a.begin(),a.end()
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop0(n) for(int i=0;i<n;i++)
#define loop1(n) for(int i=1;i<=n;i++)
const int M=1e9+7;
const int N=3e5+10;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+10];
		int cnt[101]={0};
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			cnt[a[i]]++;
		}
		for(int i=1;i<=n;i++)
		{
			if(cnt[a[i]]==1)
			{
				cout<<i<<"\n";
				break;
			}
		}
	}
	return 0;
}
