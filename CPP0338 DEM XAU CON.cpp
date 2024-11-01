#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int k; cin >> k;
		int cnt= 0;
		for (int i = 0; i <= s.size()-k; i++) {
			int res[1000] ={0};
			int x = 0;
			for (int j = i; j < s.size(); j++) {
				if (res[s[j]] == 0) x++; // chua xh
				res[s[j]]++;
				if (x == k) ++cnt;
				else if (x > k) break;
			}
		}
		cout << cnt << endl;
	}
}
