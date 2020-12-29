# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int dem_so_chan=0;
    int dem_so_le=0;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
    for(int i=1;i<=n;i++)
    {
    	if(a[i]%2==0)
    	{
    		dem_so_chan++;
		}
		if(a[i]%2==1)
		{
			dem_so_le++;
		}
	}
	int t;
	if(dem_so_chan==1)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2==0)
			{
				t=i;
				break;
			}
		}
	}
		if(dem_so_le==1)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2==1)
			{
				t=i;
				break;
			}
		}
	}
	cout<<t;
	return 0;
}
