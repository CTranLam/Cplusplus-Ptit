#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n1,n2,n3;
        cin >> n1 >>  n2 >> n3;
        ll a[n1],b[n2],c[n3];
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;
        for(ll &x : c) cin >> x;
        int i=0,j=0,k=0;
        int cnt=0;
        while(i <n1 && j<n2 && k <n3){
            if(a[i] == b[j] && b[j]==c[k]){
                cout << a[i] <<" ";
                ++i;++j;++k;
                ++cnt;
            }
            if(a[i] != b[j]){
                if(a[i] < b[j]) ++i;
                else ++j;
            }
            if(b[j] != c[k]){
                if(b[j] < c[k]) ++j;
                else ++k;
            }
        }
        if(cnt==0) cout << -1;
        cout << endl;
    }
}