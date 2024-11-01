#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,m,l;
        cin >> n >> m >> l;
        int a[n+5][m+5];
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                cin >> a[i][j];
            }
        }
        int c1=1,c2=l;
        int h1=1,h2=l;
        while(h2 <= n){
            while(c2 <=m){
                int tmp=0;
                for(int i=h1 ; i<=h2 ; i++){
                    for(int j=c1 ; j<=c2 ; j++){
                        tmp+=a[i][j];
                    }
                }
                tmp/=l*l;
                cout << tmp << " ";
                ++c1;++c2;
            }
            cout << endl;
            c1=1;c2=l;
            ++h1;++h2;
        }
    }
}