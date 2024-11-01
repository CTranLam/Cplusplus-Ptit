#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int snt(int n){
	for(int i=2 ; i<=sqrt(n) ; i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int cnt;
int a[15];
int tangdan(int n){
	int sum=0;
	for(int i=1 ; i<=n; i++) sum=sum*10+a[i];
	return sum;
}
int giamdan(int n){
	int sum=0;
	for(int i=n ; i>=1 ; i--) sum=sum*10+a[i];
	return sum;
}
void backtrack(int i,int n){
	for(int j=a[i-1]+1 ; j<= 9 ; j++){
		a[i]=j;
		if(i==n){
			int s1=tangdan(n);
			if(snt(s1)) ++cnt;
			int s2=giamdan(n);
			if(snt(s2)) ++cnt;
		}
		else{
			backtrack(i+1,n);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cnt=0;
		backtrack(1,n);
		cout << cnt << endl;
	}
}
