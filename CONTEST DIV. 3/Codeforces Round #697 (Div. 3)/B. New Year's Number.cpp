# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	long long n;
    	cin>>n;
    	bool done=false;
    	for(int i=0;i<=500;i++)
    	{
    		if((n-i*2020)%2021==0)
    		{
    			done=true;
    			break;
			}
			else if(n-i*2020<0)
			{
				done=false;
				break;
			}
		}
	    if(done) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
