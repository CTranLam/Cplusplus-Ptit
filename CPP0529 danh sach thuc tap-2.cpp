#include <bits/stdc++.h>
using namespace std; 
struct ThucTap { 
	string msv, ten, lop, email, dn; 
	int id; 
}; 
bool cmp(ThucTap a, ThucTap b){ 
	return a.msv < b.msv; 
} 
int main(){ 
	int n, q; 
	cin >> n; 
	ThucTap a[n]; 
	for (int i = 0; i < n; i++){ 
		a[i].id = i + 1; 
		scanf("\n"); 
		getline(cin, a[i].msv); 
		getline(cin, a[i].ten); 
		getline(cin, a[i].lop); 
		getline(cin, a[i].email); 
		getline(cin, a[i].dn); 
	} 
	cin >> q; 
	vector<string> v(q); 
	for (int i = 0; i < q; i++) cin >> v[i]; 
	sort(a, a + n, cmp); 
	for (int i = 0; i < q; i++){ 
		for (int j = 0; j < n; j++){ 
			if (v[i] == a[j].dn){ 
				cout << a[j].id << " " << a[j].msv << " " << a[j].ten << " " << a[j].lop << " " << a[j].email << " " << a[j].dn << "\n"; 
			} 
		}
	} 
}
