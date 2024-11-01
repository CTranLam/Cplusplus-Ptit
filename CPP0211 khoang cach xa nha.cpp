#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        int ans=0;
        for(int i=0 ; i<n ; i++){
           for(int j=n-1 ; j>=0 ; j--){
                if(a[j] >= a[i]){
                    ans=max(ans,abs(j-i));
                    break;
                }
           }
        }
        cout << ans <<endl;
    }
}