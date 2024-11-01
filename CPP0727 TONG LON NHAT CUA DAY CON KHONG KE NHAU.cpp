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
		ll f[100005];
		for(int i=1 ; i<=n ; i++){
			cin >> a[i];
			f[i]=a[i];
		}
		int st=1;
		for(int i=2 ; i<=n ; i++){
			if(i-st > 1){
				f[i]+=f[st];
				st=i;
			}
			else{
				if(f[i-2]+f[i] > f[i-1]){
					f[i]+=f[i-2];
					st=i;
				}
				else{
					f[i]=f[i-1];
				}
			}
		}
		cout << f[n] <<endl;
	}
}
