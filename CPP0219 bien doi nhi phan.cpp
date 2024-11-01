#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n+1][m+1];
		vector<pair<int,int>> v;
		for(int i=1 ; i<=n ; i++){
			for(int j=1 ; j<=m ; j++){
				cin >> a[i][j];
				if(a[i][j]==1) v.push_back({i,j});
			}
		}
		for(pair<int,int> p : v){
			int p1=p.first;
			int p2=p.second;
			for(int k=1 ; k<=m ; k++){
				a[p1][k]=1;
			}
			for(int k=1 ; k<=n ; k++){
				a[k][p2]=1;
			}
		}
		for(int i=1 ; i<=n ; i++){
			for(int j=1 ; j<=m ; j++){
				cout << a[i][j] <<" ";
			}
			cout << endl;
		}
	}
}
