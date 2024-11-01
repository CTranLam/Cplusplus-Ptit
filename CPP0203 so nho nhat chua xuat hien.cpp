#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int find_min(vector<int> v){
	set<int> se;
	for(int x : v){
		se.insert(x);
	}
	if(se.size()==0) return 0;
	auto it=se.rbegin();
	for(int i=1 ; i<=*it ; i++){
		if(se.count(i)==0){
			return i;
		}
	}
	return *it+1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v;
		for(int i=0 ; i<n ; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		cout << find_min(v) << endl;
	}
}
