#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		int ans=n;
		while(ans>=10){
			int tmp=0;
			while(ans){
				tmp+=ans%10;
				ans/=10;
			}
			ans=tmp;
		}
		cout << ans << endl;
	}
}
