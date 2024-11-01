#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	while(t--){
		int n ; cin >> n;
		map<int,int> mp;
		for(int i=0 ; i<n ; i++){
			int x; cin >> x;
			mp[x]++;
		}
		int ans=0;
		for(auto it : mp){
			if(it.second>1){
				ans+=it.second;
			}
		}
		cout << ans << endl;
	}
}
