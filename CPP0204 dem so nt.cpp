#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[100005];
void sang(){
	f[0]=f[1]=1;
	for(int i=2 ; i<=sqrt(100005) ; i++){
		if(f[i]==0){
			for(int j=i*i ; j<100005 ; j+=i){
				f[j]=1;
			}
		}
	}
}
int main(){
	sang();
	int t;cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		int cnt=0;
		for(int i=l ; i<=r ; i++){
			if(f[i]==0) ++cnt;
		}
		cout << cnt << endl;
	}
}
