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
		char a[n+10][n+10];
		int x1=-1,y1=-1,x2=-1,y2=-1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]=='*' && x1==-1){
					x1=i;y1=j;
				}
				else if(a[i][j]=='*' && x2==-1)
				{
					x2=i;y2=j;
				}
			}
		}
		int cnt=2;
		if(x1==x2)
	    {
	    	if(a[x1-1][y1]=='.' && cnt>0 && x1-1>=0)
	    	{
	    		a[x1-1][y1]='*';
	    		a[x2-1][y2]='*';
	    		cnt-=2;
			}
			else if(a[x1+1][y1]=='.' && cnt>0 && x1+1<n)
			{
			    a[x1+1][y1]='*';
	    		a[x2+1][y2]='*';
	    		cnt-=2;
			}
		}
	    else if(y1==y2)
	    {
	    	if(a[x1][y1-1]=='.' and cnt>0 and y1-1>=0)
	    	{
	    		a[x1][y1-1]='*';
	    		a[x2][y2-1]='*';
	    		cnt-=2;
			}
			else if(a[x1][y1+1]=='.' and cnt>0 and y1+1<n)
			{
			    a[x1][y1+1]='*';
	    		a[x2][y2+1]='*';
	    		cnt-=2;
			}
	    }
	    else
	    {
	    	a[x1][y2]='*';
	    	a[x2][y1]='*';
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
	          cout<<a[i][j];
	        }
	        cout<<"\n";
	   }
	}
	return 0;
}
