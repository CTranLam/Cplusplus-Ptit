#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int n){
	int cnt=0;
	if(n%2==0) cnt++;
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			//cout << i <<" "<<n/i <<endl;
			if(i % 2 == 0) ++cnt;
			if(i != n/i && (n/i) %2 == 0) ++cnt;
		}
	}
	return cnt;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << solve(n) << endl;
	}
}
