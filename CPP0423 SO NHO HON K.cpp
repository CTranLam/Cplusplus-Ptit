#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		int cnt=0;
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
			if(a[i] <=k) ++cnt;
		}
		// su dung cua so truot
		// chon cua so co it phan tu lon hon k nhat de thay doi
		int ans=0;// so phan tu lon hon k trong 1 cua so
		for(int i=0 ; i<cnt ; i++){
			if(a[i] > k) ++ans;
		}
		int l=0,r=cnt;
		int tmp=ans;
		while(r < n){
			if(a[l] > k) --tmp;
			if(a[r] > k) ++tmp;
			++l;
			++r;
			ans=min(tmp,ans);
		}
		cout << ans <<endl;
	}
}
