#include <iostream> 
#include <vector> 
using namespace std; 
void inmt(int a[105][105], int n, int m) { 
    vector<vector<int>> c(n + m - 1); 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            c[i + j].push_back(a[i][j]); 
        } 
    } 
    for (int i = 0; i < c.size(); i++) { 
        if (i % 2 == 1) { 
            for (auto x : c[i]) { 
                cout << x << " "; 
            } 
        } 
        else { 
            for (int j = c[i].size() - 1; j >= 0; j--) { 
                cout << c[i][j] << " "; 
            } 
        } 
    } 
    cout << endl; 
} 
int main() { 
    int t ; cin >> t ; 
    while (t--){ 
        int n, m; 
        cin >> n >> m; 
        int a[n][105]; 
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) 
                cin >> a[i][j]; 
        } 
        inmt(a, n, m); 
    } 
}