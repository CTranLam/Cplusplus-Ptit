#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll a,x,y;
		cin >> a >> x >> y;
		ll tmp=__gcd(x,y);
		while(tmp--){
			cout << a;
		}
		cout << endl;
	}
}
