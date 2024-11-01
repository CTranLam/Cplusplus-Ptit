#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(vector<string> v){
	ll cnt_c=0,cnt_l=0;
	for(string x : v){
		if(stoll(x)%2==0) ++cnt_c;
		else ++cnt_l;
	}
	if((v.size() %2==0 && cnt_c > cnt_l) ||(v.size()%2==1 && cnt_l>cnt_c)) return 1;
	else return 0;
}
int main(){
	int t;cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin,s);
		stringstream ss(s);
		string t;
		vector<string> v;
		while( ss>> t){
			v.push_back(t);
		}
		if(solve(v)) cout <<"YES" << endl;
		else cout <<"NO" << endl;
	}
	return 0;
}
