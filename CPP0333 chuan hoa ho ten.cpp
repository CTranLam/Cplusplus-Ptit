#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void chuanhoa(vector<string> v){
	string ans="";
	for(int i=0 ; i<v.size()-1 ; i++){
		if(i != v.size()-2){
			string tmp=v[i];
			tmp[0]=toupper(tmp[0]);
			ans+=tmp+" ";
		}
		else{
			string tmp=v[i];
			tmp[0]=toupper(tmp[0]);
			ans+=tmp+", ";
		}
	}
	string tmp=v[v.size()-1];
	for(int i=0 ; i<tmp.size() ; i++){
		tmp[i]=toupper(tmp[i]);
	}
	ans+=tmp;
	cout << ans << endl;
}
int main(){
	string s; getline(cin,s);
	for(int i=0 ; i<s.size()-1 ; i++) s[i]=tolower(s[i]);
	stringstream ss(s);
	string t;
	vector<string> v;
	while( ss>> t){
		v.push_back(t);
	}
	chuanhoa(v);
}
