#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int a[],int n,int x){
    for(int i=1 ; i<n ; i++){
        if(a[i] %x != a[i-1]%x) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int cur=0;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            cur=max(cur,a[i]);
        }
        int ok=0;
        for(int i=1 ; i<n ; i++){
            if(a[i] != a[i-1]) ok=1;
        }
        vector<int> v;
        for(int i=1 ; i<=cur ; i++){
            if(check(a,n,i)) v.push_back(i);
        }
        if(ok==0) cout << 0 <<endl;
        else cout << v.size() <<endl;
    }
}