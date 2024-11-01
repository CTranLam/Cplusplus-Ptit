#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int n; cin >> n; 
	int l = n - 1; 
	int r = n - 1; 
	for (int i = 0; i < n; i++) { 
		if (i != n - 1) { 
			for (int j = 0; j < 2*n - 1; j++) { 
				if (j == l || j == r) cout << "*"; 
				else cout << " "; 
			} 
			l--; r++; 
			cout << endl;
		}
		else { 
			for (int j = 0; j < 2*n - 1; j++) { 
				if (j % 2 == 0) { cout << "*"; } 
				else cout << " "; 
			} 
		} 
	} 
}
