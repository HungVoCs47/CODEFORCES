# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+10];
		int counting[3]={0};
		int sum=0;
		for(int i=0;i<n;i++)
		{
		  cin>>a[i];
		  sum+=a[i];
		  counting[a[i]]++;
	    }
	    int sum1=0;
	    if(sum%2==1)
	    {
	    	cout<<"NO\n";
		}
		else
		{
		sum=sum/2;
	    bool done=false;
	    for(int i=0;i<=counting[1];i++)
	    {
	    	for(int j=0;j<=counting[2];j++)
	    	{
	    		if(i+2*j==sum)
	    		{
	    			done=true;
	    			break;
				}
			}
		}
		if(done) cout<<"YES\n";
		else cout<<"NO\n";
	   }
	}
	return 0;
}
