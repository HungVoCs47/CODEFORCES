#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define fi first
#define se second
#define II pair<ll,ll>
#define FastRead ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
const int N=2e3+10;
const ll oo=1e18;
ll dp[N][N], rain[N];
II um[N];
int main()
{
    FastRead
    int a,n,m;
    cin >> a >> n >> m;
    FOR(i,1,n)
    {
        int l,r;
        cin >> l >> r;
        FOR(j,l,r-1) rain[j]=1;
    }
    FOR(i,1,m) cin >> um[i].fi >> um[i].se;
    FOR(i,0,a+1)
    FOR(j,0,m+1) dp[i][j]=oo;
 
    ll pre_min=0;
    FOR(i,0,a-1) {
    ll cur=oo;
    FOR(j,1,m+1)
    {
        if (j<=m) {
            if (um[j].fi==i) dp[i][j]=pre_min+um[j].se;
            else if (um[j].fi<i) dp[i][j]=dp[i-1][j]+um[j].se;
        }
        else {
            if (!rain[i]) dp[i][j]=min(pre_min,dp[i][j]);
        }
        cur=min(cur,dp[i][j]);
    }
    pre_min=cur;
    }
    ll ans=oo;
    FOR(j,1,m+1) ans=min(ans,dp[a-1][j]);
    if (ans==oo) cout << -1;
    else cout << ans;
}
