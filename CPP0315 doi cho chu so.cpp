#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string test(string s) {
	for (int i = s.size()- 1; i > 0; i--) {
		if (s[i] < s[i - 1]) {
			int x = i;
			for (int j = i; j < s.size(); j++) {
				if (s[j] > s[x] && s[j] < s[i - 1])
					x = j;
			}
			swap(s[x], s[i-1]);
			return s;
		}
	}
	return "-1";
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << test(s) << endl;
	}
}
