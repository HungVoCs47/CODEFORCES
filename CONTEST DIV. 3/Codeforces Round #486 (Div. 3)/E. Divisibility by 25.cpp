#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
int len;
string A;
int Try(char i,char j){
    string tmp=A;
    int pos2=tmp.rfind(j);
    if(pos2==-1) return INF;
    tmp.erase(pos2,1);
    int pos1=tmp.rfind(i);
    if(pos1==-1) return INF;
    int cnt=0;
    while(tmp[cnt]=='0')
        cnt++;
        //cout<<pos1<<" "<<pos2<<"\n";
        //cout<<cnt;
    return cnt+len-2-pos1+len-1-pos2;
}

int main(){
    cin>>A;
    len=A.length();
    int Ans=INF;
    Ans=min(Ans,Try('0','0'));
    Ans=min(Ans,Try('2','5'));
    Ans=min(Ans,Try('5','0'));
    //cout<<Ans<<"*";
    Ans=min(Ans,Try('7','5'));
    //cout<<Ans<<"*";
    if(Ans==INF) printf("-1");
    else printf("%d",Ans);
}
