#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	map<char,int> mp;
	for(char x : s){
		mp[x]++;
	}
	int max_cnt=0;
	for(auto x : mp){
		max_cnt=max(max_cnt,x.second);
	}
	if(s.size() %2==0){
		if(max_cnt > s.size()/2) return 0;
		return 1;
	}
	else{
		if(max_cnt > s.size()/2 + 1) return 0;
		return 1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;cin >> s;
		cout << check(s) <<endl;
	}
}
