#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n;cin >> n;
		set<int> se;
		for(int i=0 ; i<n ; i++){
			int x;cin >> x;
			se.insert(x);
		}
		cout << *se.rbegin()-*se.begin()+1-se.size() << endl;
	}
}
