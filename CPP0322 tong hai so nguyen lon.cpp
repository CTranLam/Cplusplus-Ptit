#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string x,y;
	cin >> x >> y;
	int len=max(x.size(),y.size());
	while(x.size() < len) x="0"+x;
	while(y.size() < len) y="0"+y;
	string ans="";
	int du=0;
	for(int i=x.size()-1 ; i>=0 ; i--){
		int tmp=x[i]-'0'+y[i]-'0'+du;
		if(tmp >=10 && i != 0){
			tmp-=10;
			du=1;
		}
		else{
			du=0;
		}
		ans=to_string(tmp)+ans;
	}
	cout <<ans <<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
