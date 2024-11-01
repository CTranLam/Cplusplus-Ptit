#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	for(int i=0 ; i<s.size() ; i++){
		if(s[i] >'9' || s[i] <'0') return false;
	}
	if(s.size() > 10) return false;
	return true;
}
int main(){
	fstream file;
	file.open("DATA.in");
	string s;
	ll ans=0;
	while(file >> s){
		if(check(s)){
			ans+=stoi(s);
		}
	}
	file.close();
	cout << ans <<endl;
}
