#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n ; cin >> n;
		set<ll> se;
		vector<ll> v;
		for(int i=0 ; i<n ; i++){
			ll x;cin >> x;
			se.insert(x);
		}
		for(int i=0 ; i<n ; i++){
			if(se.count(i)==1){
				v.push_back(i);
			}
			else{
				v.push_back(-1);
			}
		}
		for(int x : v){
			cout << x <<" ";
		}
		cout << endl;
	}
}
