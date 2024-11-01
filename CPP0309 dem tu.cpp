#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		vector<string> v;
		stringstream ss(s);
		string t;
		while(ss >> t){
			v.push_back(t);
		}
		cout << v.size() << endl;
	}
}
