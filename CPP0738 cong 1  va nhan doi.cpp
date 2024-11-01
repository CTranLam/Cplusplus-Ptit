#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		int s[n];
		ll cnt=0;
		while(true){
			for(int i=0 ; i<n ; i++){
				if(a[i]%2==1){
					a[i]--;
					cnt++;
				}
			}
			for(int i=0 ; i<n ; i++){
				a[i]/=2;
			}
			++cnt;
			int ok=1;
			for(int i=0 ; i<n ; i++){
				if(a[i] !=0) ok=0;
			}
			if(ok) break;
		}
		cout << cnt- 1 <<endl;
	}
}
