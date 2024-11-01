#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n,ll k){
	ll sum=0;
	for(int i=1 ; i<=n ; i++){
		sum+=i%k;
	}
	return sum==k;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n,k;
		cin >> n >>k;
		cout << check(n,k) << endl;
	}
}
