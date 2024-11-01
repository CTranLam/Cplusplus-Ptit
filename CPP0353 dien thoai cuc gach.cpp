#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	int l=0,r=s.size()-1;
	while(l <= r){
		if(s[l] != s[r]){
			return false;
		}
		++l;
		--r;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	map<char,string> mp;
	mp['a']=mp['b']=mp['c']="2";
	mp['d']=mp['e']=mp['f']="3";
	mp['g']=mp['h']=mp['i']="4";
	mp['j']=mp['k']=mp['l']="5";
	mp['m']=mp['n']=mp['o']="6";
	mp['p']=mp['q']=mp['r']=mp['s']="7";
	mp['t']=mp['u']=mp['v']="8";
	mp['w']=mp['x']=mp['y']=mp['z']="9";
	while(t--){
		string s;
		cin >> s;
		for(int i=0 ; i<s.size() ; i++){
			s[i]=tolower(s[i]);	
		}
		string ans="";
		for(char x : s){
			ans+=mp[x];
		}
		if(check(ans)) cout <<"YES" <<endl;
		else cout <<"NO" <<endl;
	}
}
