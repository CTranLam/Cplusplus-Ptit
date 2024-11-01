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
		vector<int> v;
		for(int i=0 ; i<n-1 ; i++){
			if(a[i]==a[i+1]){
				a[i]*=2;
				a[i+1]=0;
			}
			if(a[i] != 0){
				v.push_back(a[i]);
			}
		}
		if(a[n-1] != 0) v.push_back(a[n-1]);
		for(int x : v){
			cout << x <<" ";
		}
		for(int i=1 ; i<= n-v.size() ; i++){
			cout << 0 <<" ";
		}
		cout <<endl;
	}
}
