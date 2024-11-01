#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char,int> mp;
		for(int i=0; i<s.size() ; i++){
			mp[s[i]]++;
		}
		for(char x : s){
			if(mp[x] != 0){
				cout << x << mp[x];
				mp[x]=0;
			}
		}
		cout << endl;
	}
}
