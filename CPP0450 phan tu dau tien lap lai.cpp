#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;cin >> n;
		vector<int> v;
		map<int,int> mp;
		int ok=1;
		for(int i=0 ; i<n ; i++){
			int x;cin >> x;
			v.push_back(x);
		}
		for(int x : v){
			mp[x]++;
			if(mp[x]==2){
				cout << x <<endl;
				ok=0;
				break;
			}
		}
		if(ok) cout << -1 << endl;
	}
}
