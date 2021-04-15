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
// sieve
int minn[10000005],d[10000005];
void solve(){
   int inf=1e7+7;
   memset(minn,-1,sizeof(minn));
   for(int i=1;i<inf;i++)
   {
   	  if(d[i]>inf) continue;
   	  for(int j=i;j<inf;j+=i)
   	  {
   	     	d[j]+=i;
	  }
   }
   for(int i=1;i<inf;i++)
   {
   	 if((d[i]<inf) and (minn[d[i]]<1))
   	 {
   	   minn[d[i]]=i;	
	 }
   }
}
int main()
{
	_io;
	int t;
	cin>>t;
	solve();
	while(t--)
	{
		int c;
		cin>>c;
		cout<<minn[c];
		endl;
	}
	return 0;
}
