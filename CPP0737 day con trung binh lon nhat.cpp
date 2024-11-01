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
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		double max_e=INT_MIN;
		int l=0;
		int st,ed;
		while(l <= n-k){
			double cur_sum=0;
			for(int i=l ; i< l+k ; i++){
				cur_sum+=(double)a[i];
			}
			cur_sum/=k;
			if(cur_sum > max_e){
				max_e=cur_sum;
				//cout << max_e <<endl;
				st=l;
				ed=l+k-1;
			}
			++l;
		}
		for(int i=st; i<=ed ; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
	}
}
