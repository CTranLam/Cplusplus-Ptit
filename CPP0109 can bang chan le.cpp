#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int n){
	int chan=0,le=0;
	while(n){
		if(n%10%2==0) ++chan;
		else ++le;
		n/=10;
	}
	return chan==le;
}
int main(){
	int n; cin >> n;
	int maxn=1,minn=1;
	for(int i=1 ; i<n ; i++){
		minn*=10;
		maxn*=10;
	}
	maxn*=10;
	int cnt=0;
	for(int i=minn ; i<maxn ; i++){
		if(check(i)){
			cout << i <<" ";
			++cnt;
		}
		if(cnt==10){
			cout << endl;
			cnt=0;
		}
	}
}
