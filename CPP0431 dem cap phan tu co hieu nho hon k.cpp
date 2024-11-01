#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >>k;
		int a[n];
		for(int i=0 ;i<n ; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		ll ans=0;
		for(int i=0 ; i<n ; i++){
			auto it=lower_bound(a,a+n,a[i]+k);
			int res=it-a-i-1;
			ans+=res;
		}
		cout << ans <<endl;
	}
}
