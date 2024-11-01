#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool snt(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int find(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return i;
	}
	return n;
}
int main(){
	int t ; cin >> t;
	while(t--){
		int n;cin >> n;
		for(int i=1 ; i<=n ; i++){
			if(i==1) cout << 1 <<" ";
			else cout << find(i) << " ";
		}
		cout << endl;
	}
}
