#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n,q;
		cin >> n >> q;
		int a[n+1];
		for(int i=1 ; i<=n ; i++){
			cin >> a[i];
		}
		ll f[n+1];
		f[0]=a[0];
		for(int i=1 ; i<=n ; i++){
			f[i]=f[i-1]+a[i];
		}
		while(q--){
			int l,r;
			cin >> l >> r;
			cout << f[r]-f[l-1] << endl;
		}
	}
}
