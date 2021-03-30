# include <bits/stdc++.h>
using namespace std;
#define _io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef pair<int,int>ii;
void solve()
{
	int n;
	cin>>n;
	int a[n+10];
	vector<int>maximal;
	vector<int>minimal;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int counting[n+10]={0};
	int counting_appearance_max[n+10]={0};
	int counting_appearance_min[n+10]={0};
	for(int i=1;i<=n;i++) counting[i]++;
	for(int i=1;i<=n;i++) 
	{
	   counting_appearance_max[a[i]]++;
	   counting_appearance_min[a[i]]++;
    }
    vector<int>search;
    for(int i=1;i<=n;i++){
    	if(counting_appearance_max[i]==0) search.push_back(i);
	}
	//for(int i=0;i<search.size();i++) cout<<search[i]<<" ";
	int temp=n;
	int cur=0;
	for(int i=1;i<=n;i++)
	{
		if(counting[a[i]]==1)
		{
			counting[a[i]]=0;
			maximal.push_back(a[i]);
		}
		else
		{
			while(1)
			{
			temp=lower_bound(search.begin(),search.end(),a[i])-search.begin();
			temp--;
			if(counting_appearance_max[search[temp]]==0)
			{
			   maximal.push_back(search[temp]);counting_appearance_max[search[temp]]++;
			   search.erase(search.begin()+temp);
			   break;
		    }
		    }
	    }
    }
    for(int i=1;i<=n;i++) counting[i]++;
    temp=0;
    for(int i=1;i<=n;i++)
	{
		if(counting[a[i]]==1)
		{
			counting[a[i]]=0;
			minimal.push_back(a[i]);
		}
		else
		{
			while(1)
			{
			temp++;
			if(counting_appearance_min[temp]==0)
			{
			   minimal.push_back(temp);counting_appearance_min[temp]++;
			   break;
		    }
		    }
	    }
    }
	for(int i=0;i<maximal.size();i++) cout<<minimal[i]<<" ";
	cout<<"\n";
    for(int i=0;i<maximal.size();i++) cout<<maximal[i]<<" ";
	cout<<"\n";
}
int main()
{
    _io;
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
	}
    return 0;
}