/*HungVoCs47*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
#define FIN ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1]={0};
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a]++;
        arr[b]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            cout<<n-1<<endl;
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                continue;
                cout<<i<<" "<<j<<endl;
            }
            return;
        }
    }
}
main() 
{
	FIN;
	solve();  
}
