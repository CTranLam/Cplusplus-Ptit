#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		int visit=n;
		for(int i=1 ; i<n ; i++){
			if(a[i]-a[i-1] != 1){
				visit=i-1;
				break;
			}
		}
		auto it=lower_bound(a,a+visit,x);
		if(*it == x) cout << it-a+1 << endl;
		else{
			auto p=lower_bound(a+visit,a+n,x);
			if(*p == x) cout << p-a+1 << endl;
		}
	}
}
