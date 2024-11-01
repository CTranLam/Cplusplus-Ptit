#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int vt0=-1,vt4=-1,vt8=-1;
		for(int i=0 ; i<s.size()-2 ; i++){
			if(s[i]=='0' && s[i+1]=='8' && s[i+2]=='4'){
				vt0=i;
				vt8=i+1;
				vt4=i+2;
			}
		}
		//cout << vt0 <<" "<<vt8 <<" "<<vt4 << endl;
		for(int i=0 ; i<s.size() ; i++){
			if(i != vt0 && i != vt8 && i != vt4){
				cout << s[i];
			}
		}
		cout << endl;
	}
}
