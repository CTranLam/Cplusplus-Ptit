#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gt(int n){
	ll s=1;
	for(int i=1 ; i<=n ; i++){
		s*=i;
	}
	return s;
}
int main(){
	int n; cin >> n;
	ll sum=0;
	for(int i=1 ; i<=n ; i++){
		sum+=gt(i);
	}
	cout << sum << endl;
}
