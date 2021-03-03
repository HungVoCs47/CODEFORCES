# include <bits/stdc++.h>
using namespace std;
bool check(int matrix_1[][100], int matrix[][100])
{
	
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	char s_1[1005][1005];
	char s_2[1005][1005];
	  int n;
	  cin>>n;
	  for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
	       cin>>s_1[i][j];
	  for(int i=0;i<n;i++)
	     for(int j=0;j<n;j++)
	       cin>>s_2[i][j];
	int matrix_1[1005][1005];
	int matrix_2[1005][1005];
	for(int i=0;i<n;i++)
	   for(int j=0;j<n;j++)
	   {
	      matrix_1[i][j]=s_1[i][j]-'0';
	      matrix_2[i][j]=s_2[i][j]-'0';
	    }
	for(int i=0;i<n;i++)
	{
		if(matrix_1[0][i]!=matrix_2[0][i])
		{
			for(int j=0;j<n;j++)
			{
				matrix_1[j][i]^=1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(matrix_1[i][0]!=matrix_2[i][0])
		{
			for(int j=0;j<n;j++)
			{
			   matrix_1[i][j]^=1;	
			}
		}
	}
	bool done=true;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix_1[i][j]!=matrix_2[i][j])
			{
				done=false;
			}
		}
	}
	if(done) cout<<"YES\n";
	else cout<<"NO\n";
   }
	return 0;
}

