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
int main(){
	sang();
	int t; cin >> t;
	while(t--){
		int a,b; cin >> a >> b;
		for(int i=a ; i<=b ; i++){
			if(f[i]==0){
				cout << i <<" ";
			}
		}
		cout << endl;
	}
}
