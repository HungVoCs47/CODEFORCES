# include <bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
	int N,M;
	int Y0,Y1;
	cin>>N>>M>>Y0>>Y1;
	ll a[N+1];
	ll b[M+1];
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<M;i++)
	{
		cin>>b[i];
	}
	ll last_eaten=-1;
	int j=0;
	int eaten=0;
	for(int i=0;i<N;i++)
	{
		while(j<M && abs(a[i]-b[j+1])<abs(a[i]-b[j]))
		{
			j++;
		}
		if(last_eaten<j || (i>0 && abs(a[i-1]-b[j])==abs(a[i]-b[j])))
		{
			eaten++;
			last_eaten=j;
			
        }
		else if(j<M && i<N && abs(a[i]-b[j])==abs(a[i]-b[j+1]))
		{
			eaten++;
			last_eaten=++j;
		}
		else
		{
			last_eaten=j;
	     }
	}
	cout<<N-eaten;
	return 0;
}
