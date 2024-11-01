#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
void chuanhoa(string& s,int k){
	for(char &x : s){
		if(isalpha(x)) x=tolower(x);
	}
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(string &x : v) x[0]=toupper(x[0]);
	if(k==1){
		cout << v[v.size()-1] <<" ";
		for(int i=0 ; i<v.size()-1 ; i++){
			cout << v[i] << " ";
		}
	}
	if(k==2){
		for(int i=1 ; i<v.size() ; i++){
			cout << v[i] <<" ";
		}
		cout << v[0]<<" "; 
	}
	cout <<endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int k;cin >> k;
		cin.ignore();
		string s;
		getline(cin,s);
		chuanhoa(s,k);
	}
}
