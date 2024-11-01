#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[105][105],b[105][105];
void in(int n){
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cout << a[i][j] <<" ";
		}
		cout <<endl;
	}
}
int main(){
	int n;
	cin >> n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cin >> a[i][j];
		}
	}
	int m;
	cin >> m;
	for(int i=0 ; i<m ; i++){
		for(int j=0 ; j<m ; j++){
			cin >> b[i][j];
		}
	}
	if(n%m !=0){
		in(n);
		return 0;
	}
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			a[i][j]=a[i][j]*b[i%m][j%m];
		}
	}
	in(n);
}
