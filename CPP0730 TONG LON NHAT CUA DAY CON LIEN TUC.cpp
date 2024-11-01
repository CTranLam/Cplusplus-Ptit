#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n+5];
		ll max_e=INT_MIN;
		for(int i=1 ; i<=n ; i++){
			cin >> a[i];
			max_e=max(max_e,a[i]);
		}
		if(max_e <=0) cout << max_e <<endl;
		else{
			ll ans=0;
			ll cur_sum=0;
			for(int i=1 ; i<=n ; i++){
				cur_sum+=a[i];
				ans=max(ans,cur_sum);
				if(cur_sum <0) cur_sum=0;
			}
			cout << ans <<endl;
		}
	}
}
