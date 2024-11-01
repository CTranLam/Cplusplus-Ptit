#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// rat hay
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> st;
		st.push(1);
		int cnt=1;
		for(int i=0 ; i<s.size() ; i++){
			++cnt;
			if(s[i]=='I'){
				while(!st.empty()){
					cout << st.top();
					st.pop();
				}
			}
			st.push(cnt);
		}
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
}
