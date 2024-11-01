#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll snt[1000007];
void sang(){
    snt[0]=snt[1]=1;
    for(int i=2 ; i<=sqrt(1000007) ; i++){
        if(snt[i]==0){
            for(int j=i*i ; j<1000007 ; j+=i){
                snt[j]=1;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    sang();
    while(t--){
        ll l,r;
        cin >> l >> r;
        int l1=sqrt(l);
        int r1=sqrt(r);
        // if(pow(r1,2) != r){
        //     r1++;
        // }
        ll cnt=0;
        for(int i=l1 ; i<=r1 ; i++){
            if(snt[i]==0) ++cnt;
        }
        cout << cnt <<endl;
    }
}