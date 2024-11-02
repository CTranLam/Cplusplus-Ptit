#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[10005];
int MinJumpArray[10005];
int n;
ll Jump;
ll MinJumpFrom(int i){
    if(i== n-1){
        return 0;
    }
    if(i<0 || i>=n || a[i]==0) return INT_MAX; // khong the chay den n-1
    if(MinJumpArray[i] != -1){
        return MinJumpArray[i];
    }
    ll MinJump=INT_MAX;
    for(int j=i+1 ; j<=i+a[i]; j++){
        if(j<n){
            Jump=MinJumpFrom(j)+1;
            if(Jump < MinJump){
                MinJump=Jump;
            }
        }
    }
    MinJumpArray[i]=MinJump;
    return MinJump;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        memset(a,0,sizeof(a));
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        memset(MinJumpArray,-1,sizeof(MinJumpArray));
        Jump=0;
        int res=MinJumpFrom(0);
        if(res==INT_MAX) cout << -1 <<  endl;
        else cout << res << endl;
    }
    return 0;
}
