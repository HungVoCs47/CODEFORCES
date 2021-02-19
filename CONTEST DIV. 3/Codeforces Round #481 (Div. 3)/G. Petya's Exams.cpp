# include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
# define fi first
# define se second
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	int starting_days[105],ending_days[105],required_days[105];
	int ans[105]={0};
	//for(int i=0;i<n;i++) ans[i]=0;
	pair<int,int>v[105];
	for(int i=1;i<=m;i++)
	{
		cin>>starting_days[i]>>ending_days[i]>>required_days[i];
		v[i]=make_pair(ending_days[i],i);
	}
	sort(v+1,v+m+1);
	//for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	for(int i=1;i<=m;i++)
	{
        int id=v[i].se;
        ans[ending_days[id]]=m+1;
        int num=required_days[id];
        for(int j=starting_days[id];j<ending_days[id];j++)
        {
        if(num==0) break;
        if(ans[j]==0) 
		{
		ans[j]=id;
        num--;
        }
        }
        if(num>0)
        {
        	cout<<-1;
        	return 0;
		}
    }
	for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	return 0;
}
