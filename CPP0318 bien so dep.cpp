#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	int tmp=s[0]-'0';
	int ok=1;
	set<char> se;
	for(int i=1 ; i<s.size() ; i++){
		se.insert(s[i]);
	}
	if(se.size()==1) return 1;
	if(s[0]==s[1] && s[1]==s[2] && s[3]==s[4] && s[2] != s[3]){
		return 1;
	}
	if(se.size()==2){
		for(char x : se){
			if(x != '6' && x != '8') return 0;
		}
		return 1;
	}
	for(int i=1 ; i<s.size() ; i++){
		if(s[i] <= s[i-1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string tmp="";
		for(int i=5 ; i<s.size() ; i++){
			if(isdigit(s[i])){
				tmp+=s[i];
			}
		}
		if(check(tmp)){
			cout << "YES" <<endl;
		}
		else cout <<"NO" <<endl;
	}
}
