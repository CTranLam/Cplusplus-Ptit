#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n;cin >> n;
		vector<int> v;
		for(int i=0 ; i<n ; i++){
			int x;cin >> x;
			v.push_back(x);
		}
		int res=INT_MAX;
		for(int i=0 ; i<v.size() ; i++){
			for(int j=i+1 ; j<v.size() ; j++){
				int tmp=v[i]+v[j];
				if(abs(tmp) < abs(res)){
					res=tmp;
				}
			}
		}
		cout << res << endl;
	}
}
