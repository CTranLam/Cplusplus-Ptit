#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int max_a=INT_MIN;
		int min_b=INT_MAX;
		for(int i=0 ; i<n ; i++){
			int x;cin >> x;
			max_a=max(max_a,x);
		}
		for(int i=0 ; i<m ; i++){
			int x; cin >> x;
			min_b=min(min_b,x);
		}
		cout << (ll)max_a * min_b << endl;
	}
}
