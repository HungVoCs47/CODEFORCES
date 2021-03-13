 /*
    * Author: HungVoCs47
    * Status: AC
*/
# include <bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	ll ans=1;
	for(int i=1;i<n;i++) ans*=i;
	cout<<2*ans/n;
	return 0;
}
