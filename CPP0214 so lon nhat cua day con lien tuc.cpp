#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        // multiset<int> se;
        // for(int i=0 ; i<k ; i++){
        //     se.insert(a[i]);
        // }
        // cout << *se.rbegin() <<" ";
        // auto pos=0;
        // for(int i=k ; i<n ; i++){
        //     se.erase(se.find(a[pos]));
        //     ++pos;
        //     se.insert(a[i]);
        //     cout << *se.rbegin() <<" ";
        // }
        // cout << endl;
        int max_v=0;
        for(int i=0 ; i<k ; i++){
            max_v=max(max_v,a[i]);
        }
        cout << max_v <<" ";
        int pos=0;
        for(int i=k ; i<n ; i++){
            if(a[i] < max_v && max_v != a[pos]){
                cout << max_v <<" ";
            }
            else{
                max_v=*max_element(a+pos+1,a+i+1);
                cout << max_v <<" ";
            }
            ++pos;
        }
        cout << endl;
    }
}