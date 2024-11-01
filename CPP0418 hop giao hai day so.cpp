#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >>m;
		int a[n],b[m];
		set<int> se1,se2,se;
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
			se1.insert(a[i]);
			se.insert(a[i]);
		}
		for(int i=0 ; i<m ; i++){
			cin >> b[i];
			se2.insert(b[i]);
			se.insert(b[i]);
		}
		for(int x : se){
			cout << x <<" ";
		}
		cout <<endl;
		for(int x : se){
			if(se1.count(x) && se2.count(x)){
				cout << x << " ";
			}
		}
		cout <<endl;
	}
}
