#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[6]={'a','e','i','o','u','y'};
int main(){
	string s; cin >> s;
	for(int i=0 ; i<s.size() ; i++){
		s[i]=tolower(s[i]);
	}
	string ans="";
	for(int i=0 ; i<s.size() ; i++){
		int ok=1;
		for(char x : a){
			if(s[i]==x){
				ok=0;
				break;
			}
		}
		if(ok==1){
			cout << "." << s[i];
		}
	}
}
