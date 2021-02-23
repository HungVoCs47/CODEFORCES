/*HungVoCs47*/
#include <bits/stdc++.h>
using namespace std;
int notsubstr(string a,string b)
{
	bool done;
    for(int i=0;i<=b.size()-a.size();i++)
	{
        for(int j=0;j<a.size();j++)
        {
            if(b[i+j]!=a[j])
            {
            	break;
            }
            if(j==a.size()-1) return 0;
        }
    }
     return 1;
}
bool cmp(string a, string b)
{
return a.size()<b.size();
}
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	vector<string>s(n);
	for(int i=0;i<n;i++) cin>>s[i];
	sort(s.begin(),s.end(),cmp);
	for(int i=0;i<n-1;i++)
	{
	    if(notsubstr(s[i],s[i+1]))
	    {
	        cout<<"NO"; 
	        return 0;
	    }
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++) cout<<s[i]<<endl;
}

