#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		vector<ll> v;
		for(int i=0 ; i<n ; i++){
			if(i==0){
				v.push_back((ll)a[i]*a[i+1]);
			}
			else if(i==n-1){
				v.push_back((ll)a[i-1]*a[i]);
			}
			else{
				v.push_back((ll)a[i-1]*a[i+1]);
			}
		}
		for(ll x : v){
			cout << x <<" ";
		}
		cout <<endl;
	}
}
