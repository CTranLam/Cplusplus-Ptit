#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void chuanhoa(string &s){
	for(int i=0 ; i<s.size() ; i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	fstream file1,file2;
	file1.open("DATA1.in");
	set<string> se;
	map<string,int> mp1;
	string s;
	while(file1 >> s){
		//chuanhoa(s);
		se.insert(s);
		mp1[s]++;
	}
	file1.close();
	file2.open("DATA2.in");
	map<string,int> mp2;
	while(file2 >> s){
		//chuanhoa(s);
		se.insert(s);
		mp2[s]++;
	}
	file2.close();
	for(string x : se){
		cout << x <<" ";
	}
	cout <<endl;
	for(auto x : mp1){
		if(mp2[x.first] != 0){
			cout << x.first <<" ";
		}
	}
}
