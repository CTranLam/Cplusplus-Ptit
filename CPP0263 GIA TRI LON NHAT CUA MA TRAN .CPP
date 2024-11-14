#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[505][505];
int max_value=INT_MIN;
void solve(int n){
    int smain[505][505];
    int ssecond[505][505];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            smain[i + 1][j + 1] = a[i][j] + smain[i][j];
            ssecond[i + 1][j] = a[i][j] + ssecond[i][j + 1];
        }
    }
    //cac ma tran con co 2->n
    for (int M = 2; M <= n; ++M) {
        for (int i = 0; i <= n - M; ++i) {
            for (int j = 0; j <= n - M; ++j) {
                //tinh tong duong cheo chinh,phu
                int sumc = smain[i + M][j + M] - smain[i][j];
                int sump= ssecond[i + M][j] - ssecond[i][j + M];
                int res = sumc-sump;
                max_value = max(max_value,res);
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> a[i][j];
            max_value=max(max_value,a[i][j]);
        }
    }
    solve(n);
    cout << max_value << endl;
    return 0;
}