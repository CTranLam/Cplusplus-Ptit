#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin >> t;
	while(t--){
		int n,m,k ;cin >> n >> m >> k;
		int a[n+1][m+1];
		for(int i=1; i<=n ; i++){
			for(int j=1 ; j<=m ; j++){
				cin >> a[i][j];
			}
		}
		int c1=1,c2=m,h1=1,h2=n;
        vector<int> v;
		while(h1<=h2 && c1<=c2){
			for(int i=c1 ; i<=c2 ; i++){
				v.push_back(a[h1][i]);
			}
			h1++;
			for(int i=h1; i<=h2 ; i++){
				v.push_back(a[i][c2]);
			}
			c2--;
			if(h1 <= h2){
				for(int i=c2 ; i>=c1 ; i--){
					v.push_back(a[h2][i]);
				}
				--h2;
			}
			if(c1 <= c2){
				for(int i=h2 ; i>=h1 ; i--){
					v.push_back(a[i][c1]);
				}
				++c1;
			}
		}
		cout << v[k-1] <<endl;
	}
}
