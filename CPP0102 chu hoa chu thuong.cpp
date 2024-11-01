#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		char c; cin >> c;
		if(c>='a' && c<='z') cout << (char)(c-32) << endl;
		else cout << (char)(c+32) << endl;
	}
}
