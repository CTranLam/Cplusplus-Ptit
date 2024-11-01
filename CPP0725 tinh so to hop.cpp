#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
int c[1005][1005];
void init(){
	for(int i=0 ; i<=1000 ; i++){
		for(int j=0 ; j<= i ; j++){
			if(j==0 || j==i){
				c[i][j]=1;
			}
			else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
				c[i][j]%=MOD;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	init();
	while(t--){
		int n,r;
		cin >> n >> r;
		cout << c[n][r] <<endl;
	}
}
