# include <bits/stdc++.h>
long long int check(long long x, long long n);
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int m=1;m<=t;m++)
	{
	long long n;
	long long k;
	cin>>n>>k;
    long long left=1;
    long long right=1e13;
    long long res;
    while(left<=right)
    {
    	long long mid=left+(right-left)/2;
    	long long temp=check(mid,n);
		if(temp<k)
    	{
    		left=mid+1;
    	}
    	else 
    	{
    		right=mid-1;
    		res=mid;
        }
        
    }
    cout<<res;
    cout<<endl;
   }
	return 0;
}
long long int check(long long x, long long n)// n la so can chia
{
	long long temp;
	temp=x-x/n;
	return temp;
}
