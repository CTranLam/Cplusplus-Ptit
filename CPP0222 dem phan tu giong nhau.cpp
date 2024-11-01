#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n+1][n+1];
		for(int i=1 ; i<=n ; i++){
			for(int j=1 ; j<=n ; j++){
				cin >> a[i][j];
			}
		}
		map<int,int> mp;
		for(int i=1 ; i<=n ; i++){
			for(int j=1 ; j<=n ; j++){
				if(mp[a[i][j]] == i-1 ){
					mp[a[i][j]] = i;
				}
			}
		}
		int res=0;
		for(auto x : mp){
			if(x.second==n){
				++res;
				//cout << x.first <<endl;
			}
		}
		cout << res <<endl;
	}
}
