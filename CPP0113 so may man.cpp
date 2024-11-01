#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	string ans="";
	ans=ans+s[s.size()-2]+s[s.size()-1];
	return ans=="86";
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		cout << check(s) << endl;
	}
}
