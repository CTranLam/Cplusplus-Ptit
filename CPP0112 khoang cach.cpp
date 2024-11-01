#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		double xa,ya,xb,yb;
		cin >> xa >> ya >> xb >> yb;
		cout << fixed << setprecision(4) << (double)(sqrt(pow(xa-xb,2)+pow(ya-yb,2))) << endl;
	}
}
