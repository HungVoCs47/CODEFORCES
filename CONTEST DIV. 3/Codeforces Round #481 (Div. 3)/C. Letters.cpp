/*
    * Author: HungVoCs47
    * Status: AC
*/
#include<iostream>
using namespace std;
# define ll long long 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll b,sum=0,a[200005];
    int n,t=1,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++)
    {
        cin>>b;
        while(sum+a[t]<b)
        sum+=a[t++];
        cout<<t<<" "<<b-sum;
        cout<<endl;
    }
}
