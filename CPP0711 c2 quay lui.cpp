#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void np(string s,int n){
	if(s.size()==n){
		cout << s <<" ";
		return;
	}
	np(s+"0",n);
	np(s+"1",n);
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s="";
		np(s,n);
		cout << endl;
	}
}
