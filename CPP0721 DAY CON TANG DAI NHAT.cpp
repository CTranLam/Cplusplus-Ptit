#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int f[n];
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		for(int i=0 ; i<n ; i++){
			f[i]=1;
			for(int j=0 ; j<i ; j++){
				if(a[i] > a[j]){
					int cur=f[j]+1;
					f[i]=max(f[i],cur);
				}
			}
		}
		cout << *max_element(f,f+n) <<endl;
	}
}
