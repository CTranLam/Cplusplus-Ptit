#include<bits/stdc++.h>
typedef long long ll;
using namespace std;  
void solve() { 
    int n, m; cin >> n >> m; 
    ll ans = 0; 
    //vector<vector<ll>> dp(n + 5, vector<ll>(m + 5, 0)); 
    ll dp[n+5][m+5];
    memset(dp,0,sizeof(dp));
    string s;
    cin >> s;
    dp[0][(s[0]-'0')%m]++;
    for (int i = 1; i <n; i++) {  
        int val = s[i] - '0'; 
        dp[i][(s[i]-'0')%m]++;
        for (int j = 0; j < m; j++){ 
            dp[i][(j * 10 + val) % m] += dp[i - 1][j]; 
            dp[i][j] += dp[i - 1][j]; 
        } 
    } 
    cout << dp[n-1][0] << '\n'; 
} 
int main() { 
    int t; cin >> t; 
    while (t--) solve(); 
    return 0; 
}