#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[93];
void ktao(){
	f[1]=1;
	f[2]=1;
	for(int i=3 ; i<=92 ; i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	ktao();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << f[n] << endl;
	}
}
