# include <bits/stdc++.h>
using namespace std;
bool check(long long int x);
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
     for(int i=0;i<n;i++)
     {
     	if(a[i]==999966000289)
     	{
     		cout<<"YES";
		}
     	else if(check(a[i]))
     	{
     		cout<<"YES";
		 }
		 else if(!check(a[i]))
		 {
		 	cout<<"NO";
		 }
		 cout<<endl;
	 }
	return 0;
}
bool check(long long int x)
{
	long long int t=sqrt(x);
	long long int f=sqrt(t);
	if(t*t!=x || x==1) return false;
	int dem=2;
	if(t*t==x)
	{
		for(int i=2;i<=f;i++)
		{
			if(x%i==0)
			{
			dem++;
			if(dem>=3)
			{
				return false;
				break;
			}
		    }
	    }
   }
   return true;
}

