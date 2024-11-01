#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bin_pow(ll a,ll b,ll q){
	if(b==0) return 1;
	a%=q;
	ll x=bin_pow(a,b/2,q);
	if(b%2==0){
		return (x%q)*(x%q)%q;
	}
	else return (((x%q)*(x%q))%q*(a%q))%q;
}
int main(){
	int t; cin >> t;
	while(t--){
		int x,y,q;
		cin >> x >> y>>q;
		cout << bin_pow(x,y,q) << endl;
	}
}
