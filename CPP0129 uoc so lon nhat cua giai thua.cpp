#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll n,ll p){
    // legenri
    ll ans=0;
    for(ll i=p ; i<=n ; i*=p){
        ans+=n/i;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,p;
        cin >> n >> p;
        cout << solve(n,p) <<endl; 
    }
}