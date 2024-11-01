#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	set<char> se;
	for(char x : s){
		se.insert(x);
	}
	if(se.size()==10) return 1;
	return 0;
}
int alpha(string s){
	for(char x : s){
		if(isalpha(x)) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s[0]=='0' || !alpha(s)){
			cout << "INVALID" <<endl;
		}
		else{
			if(check(s)) cout << "YES" <<endl;
			else cout <<"NO" <<endl;
		}
	}
}
