# include <bits/stdc++.h>
using namespace std;
# define _io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
ll f(ll n) {
	return (n * (n + 1)) / 2;
}
void solve()
{
		ll n,m,i,j,k,l,r,s;
	    cin >> n >> l >> r >> s;
		l--;r--;
        k = r-l+1;
        i=f(k);
		j=f(n)-f(n-k);
        if(s<i or s>j)
		{
			cout<<-1<<"\n";
			return ;
		}
        vector<int> a(n, -1);
		set<int> q;
        for(int i=1;i<=n;i++)
			q.insert(i);
        k=0;
		for(i=l;i<=r;i++)
		{
			a[i]=i-l+1;
			k+=a[i];
		}
        j=n;
		for(i=r;i>=l;i--)
		{
			if (k==s) break;
            while(a[i]!=j && k!=s){
				a[i]++;
				k++;
			}
			j--;
		}
        for(int i=l;i<=r;i++)
			q.erase(a[i]);
 
		for(int i=0;i<n;i++)
		{
			if (a[i]==-1)
			{
				auto it=q.begin();
				a[i]=*it;
				q.erase(it);
			}
		}
 
		for (auto e:a)
			cout<<e<< " ";
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
