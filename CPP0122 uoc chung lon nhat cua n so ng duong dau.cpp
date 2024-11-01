#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
	while( b != 0){
		ll tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
ll lcm(ll a,ll b){
	return (ll)a/gcd(a,b) * b;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll bcnn=1;
		for(int i=2 ; i<=n ; i++){
			bcnn=lcm(bcnn,i);
		}
		cout << bcnn << endl;
	}
}
