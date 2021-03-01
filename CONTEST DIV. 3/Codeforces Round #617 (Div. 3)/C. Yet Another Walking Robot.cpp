# include <bits/stdc++.h>
using namespace std;
# define fi first
# define se second
typedef pair<int,int>ii;
typedef pair<ii,int>iii;
//bool cmd(iii a, iii b)
//{
//    return a.fi.fi<b.fi.fi;
//}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		vector<iii>adj;
		int dx=0;
		int dy=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='L')
			{
				dx-=1;
				adj.push_back(iii(ii(dx,dy),i+1));
			}
			if(s[i]=='R')
			{
				dx+=1;
				adj.push_back(iii(ii(dx,dy),i+1));
			}
			if(s[i]=='U')
			{
				dy+=1;
				adj.push_back(iii(ii(dx,dy),i+1));
			}
			if(s[i]=='D')
			{
				dy-=1;
				adj.push_back(iii(ii(dx,dy),i+1));
			}
		}
		adj.push_back(iii(ii(0,0),0));
		sort(adj.begin(),adj.end());
		int MIN=1e9;
		int luu_vet_x;
		int luu_vet_y;
		for(int i=0;i<adj.size()-1;i++)
		{
		    iii v=adj[i];
		    iii next_v=adj[i+1];
		    //cout<<v.fi.fi<<" "<<v.fi.se<<" "<<v.se<<"\n";
		    if(v.fi.fi==next_v.fi.fi && v.fi.se==next_v.fi.se )
		    {
		    	int t=next_v.se-v.se;
		    	//cout<<t<<" ";
		    	if(t<MIN)
		    	{
		    		MIN=t;
		    		luu_vet_x=v.se;
		    		luu_vet_y=next_v.se;
				}
			}
		}
		if(MIN==1e9) cout<<-1<<"\n";
		else 
		cout<<luu_vet_x+1<<" "<<luu_vet_y<<"\n";
	}
	return 0;
}
