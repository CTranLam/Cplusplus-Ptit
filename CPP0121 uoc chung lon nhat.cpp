#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a,int b){
	while( b != 0){
		int tmp=a%b;
		a=b;
		b=tmp;
	}
	return a;
}
ll lcm(int a,int b){
	return (ll)a/gcd(a,b) * b;
}
int main(){
	int t; cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		cout << lcm(a,b) <<" "<<gcd(a,b) << endl;
	}
}
