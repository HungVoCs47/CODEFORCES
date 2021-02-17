#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt[200007];
void solve(){
    ll n,a,i,mx=0,j,ans=0;
    vector<ll>v;
    map<ll,ll>mp;
    cin>>n;
    for(i=1;i<=n;i++) cnt[i]=0;
    for(i=0;i<n;i++){
        cin>>a;
        mp[a]++;
        cnt[mp[a]]++;
    }
    for(i=1; i<=n; i++) ans=max(ans,i*cnt[i]);
    cout<<(n-ans)<<"\n";
}
 
int main(){
    ll t;
    cin>>t;
    while(t--)solve();
    return 0;
}
