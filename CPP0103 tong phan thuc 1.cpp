#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n ; cin >> n;
	double f=0;
	for(int i=1 ; i<=n ; i++){
		f+=(double)1/i;
	}
	cout << fixed << setprecision(4) << f << endl;
}
