#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	while(t--){
		string s; cin >> s;
		ll ans=s.size();
		for(int i=1 ; i<s.size() ; i++){
			for(int j=0 ; j < i ; j++){
				if(s[i]==s[j]) ++ans;
			}
		}
		cout << ans << endl;
	}
}
