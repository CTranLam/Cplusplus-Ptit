#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		int max_cur=INT_MIN;
		for(int i=1 ; i<n ; i++){
			for(int j=0 ; j<i ; j++){
				max_cur=max(max_cur,a[i]-a[j]);
			}
		}
		cout << max_cur <<endl;
	}
}
