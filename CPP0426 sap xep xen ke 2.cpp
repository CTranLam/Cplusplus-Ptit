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
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int cnt1=n-1;
		int cnt2=0;
		for(int i=0 ; i<n ; i++){
			if(i%2==0){
				cout << a[cnt1] <<" ";
				--cnt1; 
			}
			else{
				cout << a[cnt2] <<" ";
				++cnt2;
			}
		}
		cout <<endl;
	}
}
