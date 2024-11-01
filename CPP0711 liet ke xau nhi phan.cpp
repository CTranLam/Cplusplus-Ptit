#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue<string> q;
		q.push("0");
		q.push("1");
		while(!q.empty()){
			string s=q.front();
			if(s.size()==n) break;
			q.pop();
			string tmp1=s+"0";
			string tmp2=s+"1";
			q.push(tmp1);
			q.push(tmp2);
		}
		while(!q.empty()){
			cout << q.front() <<" ";
			q.pop();
		}
		cout << endl;
	}
}
