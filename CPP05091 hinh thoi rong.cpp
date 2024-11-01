#include<bits/stdc++.h> 
#define endl "\n" 
using namespace std;
int main(){
	int n,t =1; 
	cin >> n; 
	for(int i=1;i<=2*n-1;i++){ 
		for(int j=abs(n-i);j>=1;j--){ 
			cout << " "; 
		} 
		if(i!= 1&&i!= 2*n-1){ 
			cout << "*"; 
			for(int j =1;j<=t;j++ ){ 
				cout << " "; 
			} 
			if(i<n){ 	
				t+= 2; 
			} 
			else { 
				t -=2; 
			} 
		} 
		cout <<"* \n"; 
	} 
	return 0; 
}
