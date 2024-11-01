#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int a[][105],int n){
	int res_a[105]={0}; // luu tong cac hang va cac cot
	int res_b[105]={0};
	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=n ; j++){
			res_a[i]+=a[i][j];
			res_b[j]+=a[i][j];
		}
	}
	int max_sum=0;
	for(int i=1 ; i<=n ; i++){
		max_sum=max(max_sum,res_a[i]);
		max_sum=max(max_sum,res_b[i]);
	}
	int cnt=0;
	for(int i=1,j=1 ; i<=n && j<=n ;){
		int tar=max(max_sum-res_a[i],max_sum-res_b[j]);
		cnt+=tar;
		res_a[i]+=tar;
		res_b[j]+=tar;
		if(res_a[i]==max_sum) ++i;
		else ++j;
	}
	return cnt;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[105][105];
		for(int i=1 ; i<=n ; i++){
			for(int j=1 ; j<=n ; j++){
				cin >> a[i][j];
			}
		}
		cout << solve(a,n) <<endl;
	}
}
