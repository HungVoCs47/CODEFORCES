# include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int t_3;
	int t_2;
	for(int i=0;i<=50;i++)
	{
	     t_3=n-2*i;
		 if(t_3%3==0)
		 {
		 t_2=i;
		 break;   
	     }
	}
	//cout<<t_3<<" "<<t_2;
    char ss[500];
    int cnt=0;
    int luu_vet_id;
    t_3=t_3/3;
    for(int i=0;i<n;i++)
    {
    	if(t_3==0)
		{
			luu_vet_id=i;
            break;
		}
    	cout<<s[i];
    	cnt++;
    	if(cnt==3)
    	{
    		cnt=0;
    		t_3--;
    		if(t_3>=1 || t_3==0 && t_2>0) cout<<"-";
		}
	}
	cnt=0;
	for(int i=luu_vet_id;i<n;i++)
	{
		if(t_2==0)
		{
            break;
		}
    	cout<<s[i];
    	cnt++;
    	if(cnt==2 && t_2>1)
    	{
    		cout<<"-";
    		cnt=0;
    		t_2--;
		}
	}
    return 0;
}
