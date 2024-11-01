#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        // he phuong trinh
        ll sum=n*(n+1)/2;
        ll x=(sum+m)/2;
        ll y=(sum-m)/2;
        if(__gcd(x,y)==1 && x+y==sum){
            cout << "Yes" <<endl;
        }
        else cout << "No" <<endl;
    }
}