#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k=2;
        int odd_divisor=1;
        while(k<=n){
            if (k==n){
                odd_divisor = 0;
                break;
            }
            k *= 2;
        }
        if (odd_divisor==0) {
            cout<<"NO"<<endl;
        } else cout << "YES" << endl;
    }
    return 0;
}
