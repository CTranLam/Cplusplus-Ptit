#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        ll ans=0;
        int a[n+5][m+5];
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                cin >> a[i][j];
            }
        }
        int b[5][5];
        for(int i=1 ; i<=3 ; i++){
            for(int j=1 ; j<=3 ; j++){
                cin >> b[i][j];
            }
        }
        int k=0,p=0;
        int c1=1,c2=3;
        int h1=1,h2=3;
        while(h2 <=n){
            while(c2 <= m){
                for(int i=h1 ; i<=h2 ; i++){
                    for(int j=c1 ; j<=c2 ; j++){
                        ans+=a[i][j]*b[i-p][j-k];
                    }
                }
                ++c1;++c2;
                ++k;
            }
            c1=1;c2=3;
            k=0;
            h1++;h2++;
            p++;
        }
        cout << ans <<endl;
    }
}