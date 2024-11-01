#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	if(s.size() < 2) return 0;
	int l=0,r=s.size()-1;
	while(l <= r){
		if(s[l] != s[r]) return 0;
		++l;
		--r;
	}
	return 1;
}
bool cmp(string a,string b){
	if(a.size()==b.size()) return a > b;
	else{
		return a.size() > b.size();
	}
}
int main(){
	string s;
	map<string,int> mp;
	vector<string> v;
	while(cin >> s){
		if(check(s)){
			mp[s]++;
			v.push_back(s);
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(string x: v){
		if(mp[x] != 0){
			cout << x <<" "<<mp[x] <<endl;
			mp[x]=0;
		}
	}
}
