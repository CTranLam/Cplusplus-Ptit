#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int a[],int l,int r){
	for(int i=l ; i<r ; i++){
		if(a[i] > a[i+1]){
			for(int j=i ; j<r ; j++){
				if(a[j] < a[j+1]) return 0;
			}
		}
	}
	return 1;
}
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		int l,r; cin >> l >> r;
		if(check(a,l,r)) cout <<"Yes" <<endl;
		else cout << "No" <<endl;
	}
}