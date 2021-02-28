#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  long long  prefix_sum[100005];
  int t,k;
  cin>>t>>k;
  prefix_sum[0]=1;
  for(int i=1;i<=100005;i++) prefix_sum[i]=(prefix_sum[i-1]+(i>=k? prefix_sum[i-k]:0))%MOD;
  for(int i=1;i<=100005;i++) prefix_sum[i]=(prefix_sum[i]+prefix_sum[i-1])%MOD;
  while(t--)
  {
  	int x,y;
  	cin>>x>>y;
  	cout<<(prefix_sum[y]-prefix_sum[x-1]+MOD)%MOD<<"\n";
  }
  return 0;
}
