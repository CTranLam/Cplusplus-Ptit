#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> k >> n;
		multiset<int> se;
		int a[k][n];
		for(int i=0 ; i<k ; i++){
			for(int j=0 ; j<n ; j++){
				cin >> a[i][j];
				se.insert(a[i][j]);
			}
		}
		for(auto it=se.begin() ; it != se.end() ; it++){
			if(*it == *se.rbegin()) cout << *it << endl;
			else cout << *it <<" ";
		}
	}
}
