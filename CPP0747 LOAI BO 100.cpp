#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans=0,cnt0=0;
		for(int i=s.size()-1 ; i>=0 ; i--){
			if(s[i]=='0'){
				++cnt0;
			}
			else{
				if(cnt0 >= 2){
					cnt0-=2;
					ans+=3;
				}
			}
		}
		if(ans==0) cout << endl;
		else cout << ans <<endl;
	}
}
