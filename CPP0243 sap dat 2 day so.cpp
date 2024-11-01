#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        map<int,int> mp;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        for(int i=0 ; i<m ; i++){
            cin >> b[i];
        }
        for(int i=0 ; i<m ; i++){
            while(mp[b[i]] != 0){
                cout << b[i] <<" ";
                mp[b[i]]--;
            }
        }
        for(int x : a){
            if(mp[x] != 0) cout << x <<" ";
        }
        cout << endl;
    }
}