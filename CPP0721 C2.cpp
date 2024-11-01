#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		vector<int> v;
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		for(int x : a){
			auto it=lower_bound(v.begin(),v.end(),x);
			if(it==v.end()){
				v.push_back(x);
			}
			else{
				*it=x;
			}
		}
		cout << v.size() <<endl;
	}
}
