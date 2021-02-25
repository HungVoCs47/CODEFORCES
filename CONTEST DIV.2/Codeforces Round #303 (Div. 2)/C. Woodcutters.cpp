# include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	int cordinate_x[100005];
	int height_x[100005];
	for(int i=1;i<=n;i++)
	{
		cin>>cordinate_x[i]>>height_x[i];
	}
	int cnt=0;
	int left=cordinate_x[1];
	for(int i=2;i<=n-1;i++)
	{
		if(-height_x[i]+cordinate_x[i]>left)
		{
		left=cordinate_x[i];
		cnt++;
	    }
	    else if(height_x[i]+cordinate_x[i]<cordinate_x[i+1])
	    {
	    cnt++;
	    left=height_x[i]+cordinate_x[i];
		}
		else 
		{
			left=cordinate_x[i];
		}
	}
	cnt+=2;
	cout<<cnt<<" ";
	return 0;
}
