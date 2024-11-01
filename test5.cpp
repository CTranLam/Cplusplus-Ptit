#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n];
        pair<int,int> b[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            b[i]={a[i],i+1};
        }
        sort(a,a+n);
        sort(b,b+n);
        auto it=lower_bound(a,a+n,x);
        if(*it != x){
            cout << -1 <<endl;
        }
        else{
            int pos=it-a;
            cout << b[pos].second <<endl;
        }
    }
}