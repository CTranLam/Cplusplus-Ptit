#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(string s,int k){
	if(s.size() < 26) return 0;
	map<char,int> mp;
	for(char x : s) mp[x]++;
	int cnt=0;
	for(char c='a' ; c<='z' ; c++){
		if(mp[c]==0) ++cnt;
	}
	return cnt<=k;
}
int main(){
	int t ; cin >> t;
	while(t--){
		string s; cin >> s;
		int k; cin >> k;
		cout << solve(s,k) << endl;
	}
}
