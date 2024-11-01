#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f[10];
void ktao(){
	f[0]=f[1]=1;
	f[2]=2;
	f[3]=3;
	f[4]=322;
	f[5]=5;
	f[6]=53;
	f[7]=7;
	f[8]=7222;
	f[9]=7332;
}
int main(){
	int t; cin >> t;
	ktao();
	while(t--){
		int n;
		string a;
		cin >> n >> a;
		vector<string> v;
		string tmp="";
		for(int i=0 ; i<a.size() ; i++){
			tmp+=to_string(f[a[i]-'0']);
		}
		//cout << tmp<< endl;
 		sort(tmp.begin(),tmp.end(),greater<char>());
		int visited=tmp.size()-1;
		while(tmp[visited]=='1' || tmp[visited]=='0'){
			visited--;
		}
		for(int i=0 ; i<=visited ; i++){
			cout << tmp[i];
		}
		cout << endl;
	}
}
