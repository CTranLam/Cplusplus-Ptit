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
		ll max_e=INT_MIN;
		for(int i=0 ; i<n ; i++){
			ll e=1;
			for(int j=i ; j<n ; j++){
				e*=a[j];
				if(e==0){
					break;
				}
				max_e=max(max_e,e);
			}
		}
		cout << max_e <<endl;
	}
}
