#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sovle(int a,int m){
	for(int i=1 ; i<m ; i++){
		int tmp=a*i;
		if(tmp%m==1) return i;
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int a,m;
		cin >> a >> m;
		cout << sovle(a,m) << endl;
	}
}
