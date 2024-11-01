#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k;cin >> n >>k;
		vector<int> v;
		for(int i=0 ; i<n ; i++){
			int x;cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end(),greater<int>());
		int i=0;
		while(true){
			if(i==k) break;
			cout << v[i] <<" ";
			++i;
		}
		cout << endl;
	}
}
