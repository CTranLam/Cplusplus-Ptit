#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int n){
	while(n){
		int x=n%10;
		if(x != 0 && x !=8 && x!=6) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int t ; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
