#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	fstream file;
	file.open("VANBAN.in");
	set<string> se;
	string s;
	while(file >> s){
		for(int i=0 ; i<s.size() ; i++){
			s[i]=tolower(s[i]);
		}
		se.insert(s);
	}
	for(string x : se){
		cout << x <<endl;
	}
	file.close();
}
