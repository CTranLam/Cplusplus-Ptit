#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	string x,y;
	cin >> x >> y;
	int tar=max(x.size() , y.size());
	while(x.size() < tar)	x="0"+x;
	while(y.size() < tar)	y="0"+y;
	if(x < y) swap(x,y);
	int du=0;
	string res="";
	for(int i=x.size()-1 ; i>=0 ; i--){
		int tmp=(x[i]-'0')-(y[i]-'0')-du;
		if(tmp < 0){
			tmp+=10;
			du=1;
		}
		else{
			du=0;
		}
		res=to_string(tmp)+res;
	}
	cout << res <<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
