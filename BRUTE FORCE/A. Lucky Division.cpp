# include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;
    cin>>n;
    bool done=false;
    for(int i=0;i<14;i++)
    {
    	if(n%a[i]==0)
    	{
    		done=true;
    		break;
		}
	}
	if(done) cout<<"YES";
	else cout<<"NO";
}
