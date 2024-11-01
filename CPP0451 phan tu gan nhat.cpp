#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		int k, x; cin >> k >> x;
		int z = lower_bound(a, a + n, x)-a;
		int tar=k/2;
		if (a[z] == x) {
			for(int i = z - tar; i < z; i++){
			    if(i>=0) cout << a[i] << " ";
			    else cout<<0<<" ";
			}
			for (int i = z+1; i <= z+tar; i++)
			{
				if (i < n) cout << a[i] << " ";
				else cout << 0 << " ";
			}
		}
		cout << endl;
	}
}
