#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m,p;
	cin >> n >> m >>p;
	int a[n][m],b[m][p];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0 ; i<m; i++){
		for(int j=0 ; j<p ; j++){
			cin >> b[i][j];
		}
	}
	int ans[n][p];
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<p ; j++){
			ans[i][j]=0;
			for(int k=0 ; k<m ; k++){
				ans[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<p ; j++){
			cout << ans[i][j] <<" ";
		}
		cout << endl;
	}
}
