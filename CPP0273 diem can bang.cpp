#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int a[],int n){
	ll f[n+5];
	f[1]=a[1];
	for(int i=2 ; i<=n ; i++){
		f[i]=f[i-1]+a[i];
	}
	for(int i=2 ; i<=n ; i++){
		//cout << f[i] <<" ";
		if(f[i-1]==f[n]-f[i]){
			return i;
		}
	}
	return -1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n+5];
		for(int i=1 ; i<=n ; i++){
			cin >> a[i];
		}
		cout << solve(a,n) <<endl;
	}
}
