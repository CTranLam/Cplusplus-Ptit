#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt=0;
		vector<ll> v;
		for(int i=0 ; i<n ; i++){
			ll x; cin >> x;
			if(x==0) ++cnt;
			else v.push_back(x);
		}
		while(cnt){
			v.push_back(0);
			--cnt;
		}
		for(ll x : v){
			cout << x <<" ";
		}
		cout << endl;
	}
}
