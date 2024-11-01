#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans=0;
		for(char &x : s){
			if(isalpha(x)){
				x=' ';
			}
		}
		stringstream ss(s);
		string tmp;
		vector<int> v;
		while(ss >> tmp){
			v.push_back(stoi(tmp));
		}
		cout << *max_element(v.begin(),v.end()) <<endl;
	}
}
