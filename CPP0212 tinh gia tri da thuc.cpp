#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
ll bin_pow(ll a, ll b){
	if(b==0) return 1;
	ll x=bin_pow(a,b/2);
	if(b%2==0) return ((x%MOD)*(x%MOD))%MOD;
	else return ((x%MOD * x%MOD)%MOD*a)%MOD;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n,x;
		cin >> n >> x;
		ll a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		ll sum=0;
		reverse(a,a+n);
		for(int i=0 ; i<n ; i++){
			sum+=a[i] * bin_pow(x,i);
			sum%=MOD;
		}
		cout << sum << endl;
	}
}
