#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(string s){
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]%2==1 || s[r]%2==1 || s[l] != s[r]) return 0;
		++l;
		--r;
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s ; cin >> s;
		if(solve(s)) cout <<"YES" << endl;
		else cout <<"NO" << endl;
	}
}
