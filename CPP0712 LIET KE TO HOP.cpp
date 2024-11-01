#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
int x[50];
void Try(int i){
	for(int j=x[i-1]+1 ;j<=n-k+i ; j++){
		x[i]=j;
		if(i==k){
			for(int i=1 ; i<=k ; i++){
				cout << x[i];
			}
			cout <<" ";
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
		cout <<endl;
	}
}
