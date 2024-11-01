#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; getline(cin,s);
	string t; cin >> t;
	stringstream ss(s);
	string x;
	while(ss >> x){
		if(x != t) cout << x <<" ";
	}
}
