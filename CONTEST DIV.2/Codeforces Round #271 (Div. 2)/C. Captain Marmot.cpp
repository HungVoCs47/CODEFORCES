# include <bits/stdc++.h>
using namespace std;
int x[4],y[4],a[4], b[4];
void rotate_at_index(int i){
    x[i]=x[i]-a[i];
    y[i]=y[i]-b[i];
    int new_minus_y=-y[i];
    int new_x=x[i];
    x[i]=new_minus_y;
    y[i]=new_x;
    x[i]=x[i]+a[i];
    y[i]=y[i]+b[i];
}
int distance(int i,int j) 
{
    return (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
}
 
bool isSquare() {
if (distance(0,1)!=distance(0,2)&&distance(0,1)!=distance(0,3)&&distance(1,2)!=distance(1,3))
return false;
if(distance(0,1)==distance(2,3)&&distance(0,2)==distance(1,3)&&distance(0,3)==distance(1,2)&&distance(0,1)!=0
&& distance(0,3)!=0 && distance(1,3)!=0)
return true;
return false;
}
 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
    for (int i=0;i<4;i++) {
            cin>>x[i]>>y[i]>>a[i]>>b[i];
        }
        int answer=99999;
        bool square=false;
        for (int i=0;i<4;i++){
            for (int j=0;j<4;j++){
                for (int k=0;k<4;k++){
                    for (int l=0;l<4;l++) {
                        if (isSquare()){
                            square=true;
                            answer = min(answer, i + j + k + l);
                            if(square) break;
                        }
                        if(square) break;
                        rotate_at_index(3);
                    }
                    if(square) break;
                    rotate_at_index(2);
                }
                if(square) break;
                rotate_at_index(1);
            }
            if(square) break;
            rotate_at_index(0);
        }
 
        if (answer==99999) cout<<-1<<"\n";
        else cout<<answer<<"\n";
    }
    return 0;
}
