# include <bits/stdc++.h>
using namespace std;
# define _io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
	_io;
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		int n=s.length();
		bool done=true;
		bool check[n+10]={false};
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1' and check[i]==false)
			{
				if(s[n-i-1]=='?' and check[n-i-1]==false)
				{
					check[n-i-1]=true;
					s[n-i-1]='1';
					b-=2;
				}
				else if(s[n-i-1]=='1' and check[n-i-1]==false and i!=n-i-1)
				{
					check[n-i-1]=true;
					b-=2;
				}
				else if(s[n-i-1]=='1' and check[n-i-1]==false and i==n-i-1)
				{
					b-=1;
					check[n-i-1]=true;
				}
				else if(s[n-i-1]=='0')
				{
					done=false;
				}
				check[i]=true;
			}
			if(s[i]=='0' and check[i]==false)
			{
				if(s[n-i-1]=='?' and check[n-i-1]==false)
				{
					check[n-i-1]=true;
					s[n-i-1]='0';
					a-=2;
				}
				else if(s[n-i-1]=='0' and check[n-i-1]==false and i!=n-i-1)
				{
					check[n-i-1]=true;
					a-=2;
				}
				else if(s[n-i-1]=='0' and check[n-i-1]==false and i==n-i-1)
				{
					check[n-i-1]=true;
					a-=1;
				}
				else if(s[n-i-1]=='1')
				{
					done=false;
				}
				check[i]=true;
			}
		}
		//cout<<a<<" "<<b<<" ";
		int temp=n/2-1;
		for(int i=0;i<=temp;i++)
		{
			if(s[i]=='?' and s[n-i-1]=='?')
			{
				if(a-2>=0)
				{
				   a-=2;
				   s[i]='0';
				   s[n-i-1]='0';
			    }
				else if(b-2>=0) 
				{
				   b-=2;
				   s[i]='1';
				   s[n-i-1]='1';
			    }
			}
		}
		bool done1=false;
		if(done)
		{
			if(n%2==1)
			{
			if(s[temp+1]=='?')
			{
				if(a>b and b==0 and a==1)
				{
				   s[temp+1]='0';
				   a--;	
				}
				else if(a<b and a==0 and b==1)
				{
					s[temp+1]='1';
					b--;
				}
		    }
		    }
		    	if(a==0 and b==0) done1=true;
		}
		//cout<<a<<" "<<b;
		if(done1 and done) cout<<s<<"\n";
		else cout<<"-1\n";
	//	cout<<s<<"\n";
	}
	return 0;
}
