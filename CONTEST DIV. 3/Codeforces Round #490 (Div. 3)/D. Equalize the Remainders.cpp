#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	int n,m;
	cin>>n>>m;
	int k=n/m;
	vector<int>a(n);
	vector<vector<int> >val(m);
	for (int i=0;i<n;i++) {
		cin>>a[i];
		val[a[i]%m].push_back(i);
	}
	long long ans=0;
	vector<pair<int, int> > fre;
	for (int i=0;i<3*m;++i){
		int cur=i%m;
		while(val[cur].size()>k) {
			int elem=val[cur].back();
			val[cur].pop_back();
			fre.push_back(make_pair(elem, i));
		}
		while (val[cur].size()<k && !fre.empty()) {
			int elem=fre.back().first;
			int mmod=fre.back().second;
			fre.pop_back();
			val[cur].push_back(elem);
			a[elem]+=i-mmod;
			ans+=i-mmod;
		}
	}
	cout<<ans<<endl;
	for (int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
