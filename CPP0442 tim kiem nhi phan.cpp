#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	while(t--){
		int n,k;cin >> n >>k;
		vector<int> v;
		for(int i=0 ;i<n ; i++){
			int x;cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		auto it=lower_bound(v.begin(),v.end(),k);
		if(*it != k) cout << -1 << endl;
		else cout << 1 << endl;
	}
}
