#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n){
    ll res=1;
    ll tmp=n;
    if(n > 1e12) return 0;
    for(int i=2 ; i<=sqrt(n) ; i++){
        if(n%i ==0){
            res+=i;
            res+=n/i;
        }
    }
    if(sqrt(tmp) * sqrt(tmp) == tmp) res-=sqrt(tmp);
    return tmp==res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(check(n)) cout << 1 <<endl;
        else cout << 0 <<endl;
    }
}