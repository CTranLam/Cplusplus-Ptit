#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(vector<int> v,int k){
	int cur=-1;
	for(int i=0 ; i<v.size() ; i++){
		if(v[i]==k){
			cur=i+1;
			return cur;
		}
	}
	return cur;
}
int main(){
	int t ; cin >> t;
	while(t--){
		int n,k;cin >> n >>k;
		vector<int> v;
		for(int i=0 ;i<n ; i++){
			int x;cin >> x;
			v.push_back(x);
		}
		cout << solve(v,k) << endl;
	}
}
