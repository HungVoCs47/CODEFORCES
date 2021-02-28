#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  string s;
  cin>>s;
  string msg;
  string res;
  cin>>msg;
 
  if(s[0]=='L'){
    for(int i=0;i<msg.size();i++){
      switch (msg[i])
      {
        case 'a': res+='s';break;
        case 'b': res+='n';break;
        case 'c': res+='v';break;
        case 'd': res+='f';break;
        case 'e': res+='r';break;
        case 'f': res+='g';break;
        case 'g': res+='h';break;
        case 'h': res+='j';break;
        case 'i': res+='o';break;
        case 'j': res+='k';break;
        case 'k': res+='l';break;
        case 'l': res+=';';break;
        case 'm': res+=',';break;
        case 'n': res+='m';break;
        case 'o': res+='p';break;
        case 'p': res+='[';break;
        case 'q': res+='w';break;
        case 'r': res+='t';break;
        case 's': res+='d';break;
        case 't': res+='y';break;
        case 'u': res+='i';break;
        case 'v': res+='b';break;
        case 'w': res+='e';break;
        case 'x': res+='c';break;
        case 'y': res+='u';break;
        case 'z': res+='x';break;
        case ',': res+='.';break;
        case '/': res;break;
        case '.': res+='/';break;
      }
    }
  } else{
    for(int i=0;i<msg.size();i++){
      switch (msg[i])
      {
        case 'a': res;break;
        case 'b': res+='v';break;
        case 'c': res+='x';break;
        case 'd': res+='s';break;
        case 'e': res+='w';break;
        case 'f': res+='d';break;
        case 'g': res+='f';break;
        case 'h': res+='g';break;
        case 'i': res+='u';break;
        case 'j': res+='h';break;
        case 'k': res+='j';break;
        case 'l': res+='k';break;
        case 'm': res+='n';break;
        case 'n': res+='b';break;
        case 'o': res+='i';break;
        case 'p': res+='o';break;
        case 'q': res;break;
        case 'r': res+='e';break;
        case 's': res+='a';break;
        case 't': res+='r';break;
        case 'u': res+='y';break;
        case 'v': res+='c';break;
        case 'w': res+='q';break;
        case 'x': res+='z';break;
        case 'y': res+='t';break;
        case 'z': res;break;
        case ';': res+='l';break;
        case '[': res+='p';break;
        case ',': res+='m';break;
        case '/': res+='.';break;
        case '.': res+=',';break;
      }
    }
  }
  for(int i=0;i<res.size();i++){
    cout<<res[i];
  }
  return 0;
}

