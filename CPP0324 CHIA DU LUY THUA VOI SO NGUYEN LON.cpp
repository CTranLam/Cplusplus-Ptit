#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(string s,ll m){
	ll ans=0;
	for(int i=0 ; i<s.size() ; i++){
		ans=ans*10+s[i]-'0';
		ans%=m;
	}
	return ans;	
}
ll bin_pow(ll a ,ll b,int m){
	if(b==0) return 1;
	ll x=bin_pow(a,b/2,m);
	if(b%2==0) return (x%m*x%m)%m;
	else return ((x%m*x%m)*a%m)%m;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		ll b,m;
		cin >> a >> b >> m;
		ll tmp=solve(a,m);
		cout << bin_pow(tmp,b,m) <<endl;
	}
}
