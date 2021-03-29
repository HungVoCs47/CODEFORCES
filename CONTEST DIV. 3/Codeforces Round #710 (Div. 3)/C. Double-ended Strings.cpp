# include <bits/stdc++.h>
using namespace std;
void solve(){
	string s,t;
    cin>>s>>t ;
    int lcs=0 ;
    for(int i=0;i<s.size();i++)
      {
        for(int j=0;j<t.size();j++)
        {
          int a=i,b=j;
          int len=0;
          while(a<s.size() && b<t.size() && s[a]==t[b] )
          {
            a++;
            b++;
            len++;
          }
          lcs =max(len,lcs) ;
        }
      } 
      cout<< s.size()+t.size()-2*lcs<<"\n";
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
