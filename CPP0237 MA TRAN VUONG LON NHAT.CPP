#include<bits/stdc++.h> 
#define ll long long 
#define MOD 1e9+7 
using namespace std; 
bool check(char a[25][25], int h1, int h2, int c1, int c2){ 
    if(h1-h2 != c1-c2) return 0;
    for (int i = h1; i <= h2; i++) { 
        if (a[i][c1] != 'X' || a[i][c2] != 'X') return false; 
    } 
    for (int j = c1; j <= c2; j++) { 
        if (a[h1][j] != 'X' || a[h2][j] != 'X') return false; 
    } 
    return 1; 
} 
int main(){ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL); 
    int t; cin >> t; 
    while(t--){ 
        int n; cin >> n; 
        char a[25][25]; 
        for(int i = 1; i <= n; i++){ 
            for(int j = 1; j <= n; j++) cin >> a[i][j]; 
        } 
        int res = INT_MIN; 
        for(int i = 1; i <= n; i++){ 
            for(int j = 1; j <= n; j++){ 
                for(int k = i; k <= n; k++){ 
                    for(int q = j; q <= n; q++){ 
                        if(check(a, i, k, j, q)){ 
                            res = max(res, k - i + 1); 
                        } 
                    }
                } 
            } 
        } 
        cout << res << endl; 
    } 
    return 0; 
}