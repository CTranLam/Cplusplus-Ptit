#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n][3];
	int cnt=0;
	for(int i=0 ; i<n ; i++){
		int dem1=0,dem0=0;
		for(int j=0 ; j<3 ; j++){
			cin >> a[i][j];
			if(a[i][j]) ++dem1;
			else ++dem0;
		}
		if(dem1>dem0) ++cnt;
	}
	cout << cnt << endl;
}
