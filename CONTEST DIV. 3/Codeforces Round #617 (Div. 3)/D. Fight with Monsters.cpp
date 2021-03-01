# include <bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int n,a,b,k;
	cin>>n>>a>>b>>k;
	vector<ll>aa(n);
	for(int i=0;i<n;i++)
	{
		cin>>aa[i];
		if(aa[i]%(a+b)==0)
		{
			aa[i]=a+b;
		}
		else aa[i]=aa[i]%(a+b);		
		aa[i]=((aa[i]+a-1)/a)-1;
	}
	int cnt=0;
	//for(int i=0;i<n;i++)
	//{
	//	if((aa[i]%(a+b)<=b && aa[i]%(a+b)>0) || (aa[i]<=b)) 
	//	{
	//	  if(k>0)
	//	  {
	//	  cnt++;
	//	  k--;
	//    }
	//    }
	//	else if(aa[i]%(a+b)==0 || aa[i]%(a+b)>b)
	//	{
	//		cnt++;
	//	}
	//}
	sort(aa.begin(),aa.end());
	for(int i=0;i<aa.size();i++)
	{
		if(k-aa[i]<0) break;
		cnt++;
		k-=aa[i];
	}
	cout<<cnt;
	return 0;
}
