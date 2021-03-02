# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
    int dp[26];
    int cd;
    int a1=0;
    int aa[200005];
    for(int i=n-1;i>=0;i--)
    {
       cd=1;
       for(int j=0;j<s[i]-'a';j++)
       {
       	   cd=max(cd,dp[j]+1);
	   }
	   a1=max(cd,a1);
	   aa[i]=cd;
	   dp[s[i]-'a']=cd;
	}
	cout<<a1<<"\n";
	for(int i=0;i<n;i++) cout<<aa[i]<<" ";
    return 0;
}
