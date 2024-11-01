#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e6+7;
int f[maxn];
void sang(){
	f[0]=f[1]=1;
	for(int i=2 ; i<=sqrt(maxn) ; i++){
		if(f[i]==0){
			for(int j=i*i ; j<maxn ; j+=i){
				f[j]=1;
			}
		}
	}
}
int check(int n){
	for(int i=2 ; i<=n/2 ; i++){
		if(f[i]==0 && f[n-i]==0){
			return i;
		}
	}
	return -1;
}
int main(){
	sang();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n) !=-1) cout << check(n) <<" "<<n-check(n) << endl;
	}
}
