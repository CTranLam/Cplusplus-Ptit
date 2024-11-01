#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s; getline(cin,s);
	for(int i=0 ; i<s.size() ; i++){
		if(isalpha(s[i])){
			s[i]=tolower(s[i]);
		}
	}
	vector<string> v;
	stringstream ss(s);
	string t;
	while(ss>> t){
		v.push_back(t);
	}
	string res="";
	res+=v[v.size()-1];
	for(int i=0 ; i<v.size()-1 ; i++){
		string tmp=v[i];
		res+=tmp[0];
	}
	res+="@ptit.edu.vn";
	cout << res << endl;
}
