#include <bits/stdc++.h>
using namespace std;
# define _io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve(){
	int n;
	cin >> n;
	vector<pair<int,int>> points(n);
	for(int i = 0; i < n; ++i) {
		cin >> points[i].first;
	}
	for(int i = 0; i < n; ++i) {
		cin >> points[i].second;
	}
	sort(points.begin(), points.end());
	if(points[0]!=make_pair(1, 1)) {
		points.insert(points.begin(),make_pair(1,1));
		n++;
	}
	long long answer = 0;
	for(int i=0;i<n-1;i++) {
		pair<int,int>a=points[i];
		pair<int,int>b=points[i+1];
		if(a.second-a.first==b.second-b.first) 
		{
			if((a.second+a.first)%2==0){
				answer+=b.first-a.first;
			}
		}
		else 
		{
			answer+=(b.first-b.second)/2-(a.first-a.second)/2;
		}
	}
	cout<<answer<<"\n";
}
 
int main(){
	_io;
	int T;
	cin>>T;
	while(T--){
		solve();
	}
}