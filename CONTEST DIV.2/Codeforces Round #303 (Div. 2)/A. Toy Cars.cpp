# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int a[n+10][n+10];
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	    cin>>a[i][j];
	int ans=0;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
	   int f=1;
	   for(int j=0;j<n;j++)
	   {
	   	 if(a[i][j]==1 || a[i][j]==3)
	   	 {
	   	    f=0;	
		 }
	   }
	   if(f==1)
	   {
	   	   ans++;
	   	   v.push_back(i);
	   }
    }
    sort(v.begin(),v.end());
    cout<<ans<<"\n";
    for(int i=0;i<v.size();i++) cout<<v[i]+1<<" ";
	return 0;
}
