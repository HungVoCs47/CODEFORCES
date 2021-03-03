# include <bits/stdc++.h>
using namespace std;
# define ll long long 
ll mod=1e9+7;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll C[1005][1005];
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(i==0||j==0) C[i][j]=1;
			if(i==j) C[i][j]=1;
			else C[i][j]=(C[i-1][j-1]%mod+C[i-1][j]%mod)%mod;
		}
	}
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	ll a[1010];
    	for(int i=0;i<n;i++) cin>>a[i];
    	sort(a,a+n);
    	ll counting[1010]={0};
    	for(int i=0;i<n;i++) counting[a[i]]++;
    	//int type=0;
        //for(int i=1001;i>=0;i--)
        //{
        //	if(counting[i]!=0)
        //	{
        //     if(k-counting[i]>=0)
        //       {
        //          k-=counting[i];
		//	   }
		//      else
		//       {
		//      	   type=counting[i];
		//       	   break;
		//	   }
		//	}
		//}
		//cout<<type<<" "<<type-k<<" "<<k<<" "<<"\n";
		//ll c1=1;
		//ll c2=1;
		//ll c3=1;
        //for(int i=type;i>=type-(type-k)+1;i--) 
		//{
		//  c1*=i;
		//   c1%=mod;
	    //}
	    //c1%=mod;
		//for(int i=1;i<=type-k;i++)
		//{
		//	c3*=i;
		//	c3%=mod;
		//}
		//c3%=mod;
		//cout<<c1<<" "<<c3<<" ";
		//ll ans=c1/c3%mod;
		//cout<<ans<<"\n";
		ll sum=k,ans=1;
		for(int i=1000;i>=1;i--) {
			if(sum>=counting[i]) sum-=counting[i];
			else {
				ans*=C[counting[i]][sum];
				ans%=mod;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
