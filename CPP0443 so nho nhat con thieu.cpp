#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	while(t--){
		int n; cin >> n;
		ll sum=0;
		for(int i=1 ; i<=n-1 ; i++){
			int x; cin >> x;
			sum+=x;
		}
		ll res=0;
		res=(ll)(n)*(n+1)/2 ;
		cout << res-sum << endl;
	}
}
