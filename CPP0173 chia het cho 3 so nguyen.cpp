#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll x , ll n){
	ll minn=pow(10,n-1);
	ll maxn=pow(10,n)-1;
	if(x > maxn) return -1;
	ll du=minn/x;
	if(minn%x==0) return (ll)du*x;
	else{
		du+=1;
		return (ll)du*x;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll x,y,z,n;
		cin >> x >> y >> z >> n;
		ll lcm1= x * y/__gcd(x,y);
		ll lcm2= lcm1 * z/__gcd(lcm1,z);
		cout << solve(lcm2,n) <<endl;
	}
}
