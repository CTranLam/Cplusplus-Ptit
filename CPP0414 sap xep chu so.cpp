#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	while(t--){
		int n ; cin >> n;
		int cnt[10]={0};
		for(int i=0 ; i<n ; i++){
			ll x; cin >> x;
			while(x != 0){
				cnt[x%10]=1;
				x/=10;
			}
		}
		for(int i=0 ; i<10 ; i++){
			if(cnt[i] == 1){
				cout << i <<" ";
			}
		}
		cout << endl;
	}
}
