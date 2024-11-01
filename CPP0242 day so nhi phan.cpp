#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n],b[n];
		for(int i=0 ; i<n ; i++) cin >> a[i];
		for(int i=0 ; i<n ; i++) cin >> b[i];
		int cnt=0;
		int i1=0;
		for(int i=0 ; i<n ; i++){
			int sum_a=0,sum_b=0;
			for(int j=i ; j<n ; j++){
				int cur_cnt=0;
				sum_a+=a[j];
				sum_b+=b[j];
				if(sum_a==sum_b){
					cur_cnt+=j-i+1;
					cnt=max(cur_cnt,cnt);
				}
			}
		}
		cout << cnt <<endl;
	}
}
