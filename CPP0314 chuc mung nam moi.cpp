#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t ; cin >> t;
	cin.ignore();
	set<string> se;
	while(t--){
		string s;
		getline(cin,s);
		se.insert(s);
	}
	cout << se.size() << endl;
}
