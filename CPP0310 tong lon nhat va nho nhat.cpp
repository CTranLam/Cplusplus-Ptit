#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll max_s(string x1,string x2){
	for(int i=0 ; i<x1.size() ; i++){
		if(x1[i]=='5'){
			x1[i]='6';
		}
	}
	for(int i=0 ; i<x2.size() ; i++){
		if(x2[i]=='5'){
			x2[i]='6';
		}
	}
	return stoll(x1)+stoll(x2);
}
ll min_s(string x1,string x2){
	for(int i=0 ; i<x1.size() ; i++){
		if(x1[i]=='6'){
			x1[i]='5';
		}
	}
	for(int i=0 ; i<x2.size() ; i++){
		if(x2[i]=='6'){
			x2[i]='5';
		}
	}
	return stoll(x1)+stoll(x2);
}
int main(){
	int t;cin >>  t;
	while(t--){
		string x1,x2;
		cin >> x1 >> x2;
		cout << min_s(x1,x2) <<" "<<max_s(x1,x2) <<endl;
	}
}
