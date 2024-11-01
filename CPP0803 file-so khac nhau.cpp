#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	fstream file;
	file.open("DATA.in");
	map<int,int> mp;
	int n;
	while(file >> n){
		mp[n]++;
	}
	for(auto x : mp){
		cout << x.first <<" "<<mp[x.first] <<endl;  
	}
	file.close();
}
