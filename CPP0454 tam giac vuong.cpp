#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(int a[],int n){
	for(int i=n-1 ; i>=0 ; i--){
		int l=0,r=i-1;
		ll tar=(ll)a[i]*a[i];
		while(l < r){
			ll cur=(ll)a[l]*a[l]+(ll)a[r]*a[r];
			if(cur==tar){
				return true;
			}
			else if(cur < tar){
				++l;
			}
			else{
				--r;
			}
		}
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		sort(a,a+n);
		if(solve(a,n)) cout <<"YES" <<endl;
		else cout <<"NO" <<endl;
	}
}
