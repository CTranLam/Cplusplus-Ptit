#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<string> st;
		stringstream ss(s);
		string t;
		while(ss>> t){
			st.push(t);
		}
		while(!st.empty()){
			cout << st.top() <<" ";
			st.pop();
		}
		cout << endl;
	}
}
