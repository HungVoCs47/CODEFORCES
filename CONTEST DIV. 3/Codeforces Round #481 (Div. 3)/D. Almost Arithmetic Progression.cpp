# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=1e9;
    if(n<=2) cout<<0;
    else 
    {
    	for(int i=-1;i<=1;i++)
    	{
    	   for(int j=-1;j<=1;j++)
		   {
			   int x=a[0]+i;
			   int y=a[1]+j;
			   int cnt=abs(i)+abs(j);
			   int pre_element=y;
			   int diff=y-x;
			   for(int k=2;k<n;k++)
			   {
			   	  int next_element=pre_element+diff;
			   	  if(abs(next_element-a[k])==1) cnt++;
			   	  else if(abs(next_element-a[k])>1)
			   	  {
			   	  	cnt=1e9;
			   	  	break;
				  }
				  pre_element=next_element;
			   }
			   ans=min(ans,cnt);
		   }	
		}
		cout<<(ans==1e9?-1:ans);
	}
	return 0;
}
