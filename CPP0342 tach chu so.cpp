#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char,int> mp;
		int sum=0;
		for(char x : s){
			if(isalpha(x)){
				mp[x]++;
			}
			else sum+=x-'0';
		}
		for(auto x : mp){
			while(x.second != 0){
				cout << x.first;
				x.second--;
			}
		}
		cout << sum <<endl;
	}
}
