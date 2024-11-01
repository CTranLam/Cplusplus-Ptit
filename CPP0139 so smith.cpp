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
int cs(int n){
    int ans=0;
    while(n !=0 ){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
bool check(int n){
    if(snt[n]==0) return 0;
    int cur=0;
    int tmp=n;
    for(int i=2 ; i<=sqrt(tmp) ; i++){
        if(snt[i]==0){
            while(tmp%i==0){
                cur+=cs(i);
                tmp/=i;
            }
        }
    }
    if(tmp != 1) cur+=cs(tmp);
    int res=0;
    while(n!=0){
        res+=n%10;
        n/=10;
    }
    return res==cur;
}
int main(){
    int t;
    cin >> t;
    sang();
    while(t--){
        int n;
        cin >> n;
        if(check(n)) cout <<"YES" <<endl;
        else cout <<"NO" <<endl;
    }
}