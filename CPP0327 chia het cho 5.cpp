#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	while(t--){
		string s; cin >> s;
		int ans=0;
		int luythua=1;
		for(int i=s.size()-1 ; i>=0 ; i--){
			ans+=(s[i]-'0') * luythua;
			ans%=5;
			luythua*=2;
			luythua%=5;
		}
		if(ans==0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
