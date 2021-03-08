/*
    * Author: HungVoCs47
    * Status: AC
*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    int a[1005];
    int pref[1005];
    cin>>n>>m;
    int mx=0,mini=0;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
        mx=max(mx,pref[i]);
        mini=min(mini,pref[i]);
    }
    if (mx>m)
        cout<<0;
    else if (m-(mx-mini)<0)
        cout<<0;
    else
        cout<<m-(mx-mini)+1;
 
    return 0;
}
