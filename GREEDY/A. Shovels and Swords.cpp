# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int m=1;m<=t;m++)
	{
		long long a;// numbers of sticks
	    long long b;// numbers of diamonds;
	    cin>>a>>b;
	    long long sum=a+b;
	    sum=sum/3;
	    if(sum<a && sum<b)
	    {
	    	cout<<sum;
	    }
	    else
	    {
	    	sum=min(a,b);
	    	cout<<sum;
	    }
	    cout<<endl;
	}
	return 0;
}
