#include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
int main() { 
	fstream file;
	file.open("DATA.in");
	int n,m;
	file >> n >> m;
	map<int,int> mp1,mp2;
	while(n--){
		int x;
		file >> x;
		mp1[x]++;
	}
	while(m--){
		int x;
		file >> x;
		mp2[x]++;
	}
	for(auto x : mp1){
		if(mp2[x.first] != 0){
			cout << x.first <<" ";
		}
	}
}
