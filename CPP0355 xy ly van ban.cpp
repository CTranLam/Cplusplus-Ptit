#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string upper(string s){
	s[0]=toupper(s[0]);
	return s;
}
int main(){
	string s;
	vector<string> v;
	while(cin >> s){
		for(int i=0 ; i<s.size() ; i++){
			s[i]=tolower(s[i]);
		}
		v.push_back(s);
	}
	int ok=1;
	for(string x : v){
		if(ok){
			x=upper(x);
			ok=0;
		}
		char c=x[x.size()-1];
		if(c=='.' || c=='?' || c=='!'){
			x.pop_back();
			cout << x <<endl;
			ok=1;
		}
		else{
			cout << x <<" ";
		}
	}
}
