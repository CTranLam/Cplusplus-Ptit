#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a;
        string b;
        cin >> a >> b;
        ll c=0;
        for(int i=0 ; i<b.size() ; i++){
            c=c*10+b[i]-'0';
            c%=a;
        }
        cout << __gcd(a,c) <<endl;
    }
}