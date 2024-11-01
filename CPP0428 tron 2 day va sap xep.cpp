#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		multiset<int> se;
		for(int i=0 ; i<n ; i++){
			int x ; cin >> x;
			se.insert(x);
		}
		for(int i=0 ; i<m ; i++){
			int x ; cin >> x;
			se.insert(x);
		}
		for(int x : se) cout << x <<" ";
		cout << endl;
	}
}
