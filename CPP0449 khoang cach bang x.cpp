#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int ok=1;
		for(int i=0 ; i<n ; i++){
			auto it=lower_bound(a,a+n,a[i]+x);
			if(*it==x+a[i]){
				cout << 1 <<endl;
				ok=0;
				break;
			}
		}
		if(ok) cout << -1 <<endl;
	}
}
