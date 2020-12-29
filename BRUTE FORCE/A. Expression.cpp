# include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx=max(a,max(b,c));
    int result;
    int x=a+b+c;
    int y=(a+b)*c;
    int z=a+(b*c);
    int v=a*b*c;
    int m=a*(b+c);
    int n=(a*b)+c;
    result=max(x,max(y,max(z,max(v,max(m,n)))));
    cout<<result;
	return 0;
}
