# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int s,t;
	string ss,tt;
	cin>>s>>t;
	cin>>ss>>tt;
	int ans=-1e3;
    int l[200005],r[200005];
    int i,j;
    for(i=0,j=0;j<t;i++) if(ss[i]==tt[j]) l[j++]=i;
    for(i=s-1,j=t-1;j>=0;i--) if(ss[i]==tt[j]) r[j--]=i;
    for(int i=0;i<t-1;i++) ans=max(ans,r[i+1]-l[i]);
    cout<<ans;
	return 0;
}
