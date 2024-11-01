#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	while(t--){
		string s; cin >> s;
		int ans=0;
		for(char x : s){
			ans=ans*10 + x-'0';
			ans%=11;
		}
		if(ans==0) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
