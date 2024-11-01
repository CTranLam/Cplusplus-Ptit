#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
int x[100];
void init(){
    for(int i=1 ; i<=k ; i++){
        x[i]=i;
    }
}
void Try(int i){
    for(int j=x[i-1]+1 ; j<=n-k+i ; j++){
        x[i]=j;
        if(i==k){
            for(int i=1 ; i<=k ; i++){
                cout << x[i] <<" ";
            }
            cout << endl;
        }
        else Try(i+1);
    }
}
int main(){
    cin >> n >> k;
    init();
    Try(1);
}