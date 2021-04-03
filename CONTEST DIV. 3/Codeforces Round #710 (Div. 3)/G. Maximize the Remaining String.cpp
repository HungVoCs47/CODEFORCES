#include <bits/stdc++.h>
using namespace std;
void test_case() {
	string s;
	cin>>s;
	int n=s.length();
	vector<bool>exists(26);
	for(int i=0;i<n;i++) {
		int x=s[i]-'a';
		exists[x]=true;
	}
	int start=0;
	while(true){
		bool anything_happened = false;
		for(int use = 25; use >= 0; --use) {
			if(exists[use]){
				int where=start;
				while(s[where] - 'a' != use) {
					where++;
				}
				vector<bool> in_suffix(26);
				for(int i = where; i < n; ++i) {
					if(exists[s[i]-'a']) {
						in_suffix[s[i]-'a'] = true;
					}
				}
				if(in_suffix == exists) {
					cout << s[where];
					exists[s[where]-'a'] = false;
					start = where + 1;
					anything_happened = true;
					break;
				}
			}
		}
		if(!anything_happened) {
			break;
		}
	}
	cout << "\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
}
