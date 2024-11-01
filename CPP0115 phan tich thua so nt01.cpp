#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void phantich(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		int mu=0;
		while(n%i==0){
			++mu;
			n/=i;
		}
		if(mu != 0) cout << i <<" "<<mu<<" ";
	}
	if(n!=1){
		cout << n <<" "<<1;
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		phantich(n);
	}
}
