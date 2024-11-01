#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e6+7;
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector<int> v;
		for(int i=2 ; i<=sqrt(n) ; i++){
			while(n%i==0){
				v.push_back(i);
				n/=i;
			}
		}
		if(n != 1) cout << n << endl;
		else{
			cout << v[v.size()-1] << endl;
		}
	}
}
