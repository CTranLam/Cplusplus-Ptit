#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int snt(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x;cin >> x;
		int cnt=0;
		for(int k=1 ; k<=x ; k++){
			if(__gcd(x,k)==1) ++cnt;
		}
		if(snt(cnt)) cout << 1 <<endl;
		else cout << 0 << endl;
	}
}
