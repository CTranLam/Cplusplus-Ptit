#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string s;
	ll m;
	cin >> s >> m;
	ll ans=0;
	for(int i=0 ; i<s.size() ; i++){
		ans=ans*10+s[i]-'0';
		ans%=m;
	}
	cout << ans <<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
