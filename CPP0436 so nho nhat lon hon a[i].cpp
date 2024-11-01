#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        map<int,int> mp;
        for(int i=0 ;i < n ; i++){
            auto it=upper_bound(a+i,a+n,a[i]);
            mp[a[i]]=it-a;
        }
        for(int i=0 ; i<n ; i++){
            if(mp[b[i]]==n){
                cout <<"_" <<" ";
            }
            else{
                cout << a[mp[b[i]]] <<" ";
            }
        }
        cout << endl;
    }
}