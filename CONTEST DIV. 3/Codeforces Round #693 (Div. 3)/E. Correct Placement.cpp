#include<bits/stdc++.h>
using namespace std;
# define fi first
# define se second
typedef pair<int,int>ii;
typedef pair<ii,int>iii;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
     while(t--){
		int i,n,h,w;
		cin>>n;
		vector<int>ans(n,-1);
		vector<iii>D;
        for(i=0;i<n;i++){
			cin>>w>>h;
			D.push_back(iii(ii(w,-h),i));
			D.push_back(iii(ii(h,-w),i));
		}
        sort(D.begin(),D.end());
		int e=-1,m=2e9;
        for (int i=0;i<D.size();i++){
        	iii x=D[i];
			w=x.fi.fi;
			h=-x.fi.se;
			int id=x.se;
            if (h>m) {
				ans[id]=e+1;
			}else if(h<m){
				m=h;
				e=id;
			}
		}
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
		cout<<"\n";
	}
    return 0;
}
