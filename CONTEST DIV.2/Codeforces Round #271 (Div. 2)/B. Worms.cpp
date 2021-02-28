#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n;
  cin>>n;
  int a[100005];
  a[1]=1;
  for(int i=2;i<=n+1;i++) 
  {
     cin>>a[i];
     a[i]+=a[i-1];
  }
  //for(int i=1;i<=n;i++) cout<<a[i]<<" ";
  int k;
  cin>>k;
  int x[100005];
  for(int i=0;i<k;i++) cin>>x[i];
  for(int i=0;i<k;i++)
  {
  	int t=lower_bound(a+1,a+n+1,x[i])-a;
  	if(a[t]==x[i]) cout<<t<<"\n";
  	else cout<<t-1<<"\n";
  }
  return 0;
}
