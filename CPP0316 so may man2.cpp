#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s){
	int sum=0;
	for(char x : s){
		sum+=x-'0';
	}
	if(sum==9) return 1;
	return 0;
}
int tong(string s){
	int sum=0;
	for(char x : s){
		sum+=x-'0';
	}
	return sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ok=0;
		while(tong(s) >= 9){
			if(tong(s)==9){
				ok=1;
				break;
			}
			else s=to_string(tong(s)); 
		}
		if(ok) cout << 1 <<endl;
		else cout << 0 <<endl; 
	}
}
