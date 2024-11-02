#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        if(a[i] > x){
            cout << 1 << endl;
            return;
        }
    }
    int pre_fix[n];
    pre_fix[0]=a[0];
    for(int i=1 ; i<=n ; i++){
        pre_fix[i]=pre_fix[i-1]+a[i];
    }
    if(pre_fix[n-1] < x){
        cout << -1 << endl;
        return;
    }
    auto it=upper_bound(pre_fix,pre_fix+n ,x);
    int pos=it-pre_fix;
    int ans=INT_MAX;
    int l=0;
    for(int i=pos ; i<n ; i++){
        while(pre_fix[i] - pre_fix[l] > x){
            ++l;
        }
        ans=min(ans,i-l+1);
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}