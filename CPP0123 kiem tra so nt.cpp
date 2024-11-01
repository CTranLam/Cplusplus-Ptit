#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n; cin >> n;
	if(check(n)) cout <<"YES" << endl;
	else cout << "NO" << endl;
}
