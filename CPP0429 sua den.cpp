#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,k,b;
	cin >> n >> k >> b;
	int a[n+1];
	for(int i=0 ; i<n ; i++) a[i]=1;
	for(int i=1 ; i<=b ; i++){
		int x;
		cin >> x;
		a[x]=0;
	}
	int cnt=0;// dem so den bi hong
	for(int i=1 ; i<=k ; i++){
		if(a[i]==0){
			++cnt;
		}
	}
	int ans=cnt;
	int l=1,r=k+1;
	while(r <= n){
		if(a[l]==0) --cnt;
		if(a[r]==0) ++cnt;
		++l;
		++r;
		ans=min(ans,cnt);
	}
	cout << ans <<endl;
}
