# include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	int m;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
		int b[m+1];
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int dem=0;
	sort(a,a+n);
	sort(b,b+m);
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		if(abs(a[i]-b[j])<=1 && a[i]!=-1e9 && b[j]!=-1e9)
    		{
    			a[i]=-1e9;
    			b[j]=-1e9;
    			dem++;
			}
		}
	}
	
	cout<<dem;
	return 0;
}
