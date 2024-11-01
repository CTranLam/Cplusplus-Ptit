#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dem(int a[],int n,int k){
	int cnt=0;
	for(int i=1 ; i<n ; i++){
		for(int j=0 ; j<i ; j++){
			if(a[j] <= k && a[i]+a[j]==k){
				++cnt;
			}
		}
	}
	return cnt;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n>>k;
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		cout << dem(a,n,k) << endl;
	}
}
