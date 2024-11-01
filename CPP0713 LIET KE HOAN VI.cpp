#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int used[50],x[50];
void Try(int i){
	for(int j=1 ; j<=n ; j++){
		if(!used[j]){
			x[i]=j;
			used[j]=1;
			if(i==n){
				for(int i=1 ; i<=n ; i++){
					cout << x[i];
				}
				cout <<" ";
			}
			else{
				Try(i+1);
			}
			used[j]=0;// backtrack
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		memset(used,0,sizeof(used));
		cout <<endl;
	}
}
