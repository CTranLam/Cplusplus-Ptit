#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD= 1e9+7;
ll binpow(ll a,ll b){
    if(b==1) return a;
    ll x=binpow(a,b/2);
    if(b%2==0) return (x%MOD * x%MOD)%MOD;
    else return ((x%MOD* x%MOD)*a%MOD)%MOD;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(int i=0 ; i<n ; i++) cin >> a[i];
        ll x=a[0];
        ll sum=a[0];
        for(int i=1 ; i<n ; i++){
            x=__gcd(x,a[i]);
            sum*=a[i];
            sum%=MOD;
        }
        cout << binpow(sum,x) <<endl;
    }
}