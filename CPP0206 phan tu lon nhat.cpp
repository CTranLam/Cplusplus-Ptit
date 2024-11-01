#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int maxn=0;
		for(int i=0 ; i<n ; i++){
			cin >>a[i];
			maxn=max(maxn,a[i]);
		}
		cout << maxn << endl;
	}
}
