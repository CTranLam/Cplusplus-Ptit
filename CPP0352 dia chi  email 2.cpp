#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	map<string,int> mp;
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0 ; i<s.size() ; i++){
			s[i]=tolower(s[i]);
		}
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		string ans="";
		ans+=v.back();
		mp[ans]++;
		for(int i=0 ; i<v.size()-1 ; i++){
			ans+=v[i][0];
		}
		if(mp[v.back()] >= 2){
			ans+=to_string(mp[v.back()]);
		}
		ans+="@ptit.edu.vn";
		cout << ans <<endl;
	}
}
