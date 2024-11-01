#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
int check1(vector<char> v){
	int cnt=0;
	int i=0;
	while(i<15){
		if(a[i]==v[i]) ++cnt;
		++i;
	}
	return cnt;
}
int check2(vector<char> v){
	int cnt=0;
	int i=0;
	while(i<15){
		if(b[i]==v[i]) ++cnt;
		++i;
	}
	return cnt;
}
int main(){
	int t; cin >> t;
	while(t--){
		int ma; cin >> ma;
		vector<char> v;
		for(int i=1 ; i<=15 ; i++){
			char c;
			cin >> c;
			v.push_back(c);
		}
		if(ma==101){
			int diem=check1(v);
			cout << fixed << setprecision(2) << ((double)diem/15) *10 << endl; 
		}
		else{
			int diem=check2(v);
			cout << fixed << setprecision(2) << ((double)diem/15) *10 << endl;
		}
	}
}
