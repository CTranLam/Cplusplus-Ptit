#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(string a,string b){
	string s1=a+b;
	string s2=b+a;
	return s1 < s2;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		sort(a,a+n,cmp);
		string ans="";
		for(int i=n-1 ; i>=0 ; i--){
			ans+=a[i];
		}
		cout << ans <<endl;
	}
}
