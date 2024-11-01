#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[105][105];
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				cin >> a[i][j];
			}
		}
		int b[105][105]={0};
		for(int j=0 ; j<m ; j++){
			b[0][j]=a[0][j];
			for(int i=1 ; i<n ; i++){
				if(a[i][j]==0) b[i][j]=0;
				else{
					b[i][j] = b[i-1][j]+1;
				}
			}
		}
		// sap xep tang dan cac phan tu trong tung hang
		for(int i=0 ; i<n ; i++){
			sort(b[i],b[i]+m,greater<int>());
		}
		int res=0;
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				res=max(res,b[i][j] * (j+1));
			}
		}
		cout << res <<endl;
	}
}
