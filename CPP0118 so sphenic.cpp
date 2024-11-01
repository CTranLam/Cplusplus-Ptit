#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int n){
	int f[10002]={0};
	int cnt=0;
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0){
			++cnt;
			while(n%i==0){
				f[i]++;
				n/=i;
				if(f[i]==2) return false;
			}
		}
	}
	if(n > 1) ++cnt;
	return cnt==3;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n)) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
