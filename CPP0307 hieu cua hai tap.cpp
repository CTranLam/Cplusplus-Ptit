#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin,s);
		string t; getline(cin,t);
		stringstream ss(s),tt(t);
		set<string> s1,s2;
		string tmp;
		while(ss >> tmp){
			s1.insert(tmp);
		}
		while(tt >> tmp ){
			s2.insert(tmp);
		}
		for(string x : s1){
			if(s2.count(x)==0){
				cout << x <<" ";
			}
		}
		cout <<endl;
	}
}
