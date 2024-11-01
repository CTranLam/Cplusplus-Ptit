#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[93];
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2 ; i<=92 ; i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	fibo();
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		for(int i=0 ; i<n ; i++){
			for(int k=0 ; k<93 ; k++){
				if(a[i]==f[k]){
					cout << f[k] <<" ";
					break;
				}
			}
		}
		cout << endl;
	}
}
