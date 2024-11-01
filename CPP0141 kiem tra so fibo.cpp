#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[93];
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2 ; i<=92 ; i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	fibo();
	int t;cin >> t;
	while(t--){
		ll n;cin >> n;
		int ok=1;
		for(int i=0 ; i<=92 ; i++){
			if(n==f[i]){
				ok=0;
				cout << "YES" << endl;
				break;
			}
		}
		if(ok) cout <<"NO" << endl;
	}
}
