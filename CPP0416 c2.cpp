#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n>>k;
		int a[n];
		map<int,int> mp;
		int cnt=0;
		multiset<pair<int,int>> se;
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
			if(k>=a[i]){
				if(mp[k-a[i]] != 0){
					cnt+=mp[k-a[i]];
				}
			}
			mp[a[i]]++;
		}
		cout << cnt << endl;
	}
}
