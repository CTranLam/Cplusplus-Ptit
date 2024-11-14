#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt[10];//dem nhung truong hop ngoai le
// so luong phan tu cua y lon hon phan tu x
int solve(int y[],int m,int tmp){
    int ans=0;
    if(tmp==0) return 0;
    if(tmp==1) return cnt[0];
    ans=cnt[1]+cnt[0];
    int pos=upper_bound(y,y+m,tmp)-y;
    if(pos != m){
        ans+=m-pos;
    }
    if(tmp==2) ans=ans-cnt[3]-cnt[4];// cac th k tm
    if(tmp==3) ans=ans+cnt[2];
    return ans; 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(cnt,0,sizeof(cnt));
        int n,m;
        cin >> n >> m;
        int x[n],y[m];
        for(int i=0 ; i<n ; i++){
            cin >> x[i];
        }
        for(int i=0 ; i<m ; i++){
            cin >> y[i];
            if(y[i] <=4){
                cnt[y[i]]++;
            }
        }
        sort(y,y+m);
        ll ans=0;
        for(int tmp : x){
            ans+=solve(y,m,tmp);
        }
        cout << ans << endl;
    }
}