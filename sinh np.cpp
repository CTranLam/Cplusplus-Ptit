#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,x[100];
bool final=0;
void Init(){
    for(int i=1 ; i<=n ; i++){
        x[i]=0;
    }
}
void sinh(){
    int i=n;
    while( x[i] == 1 && i>=1){
        x[i]=0;
        --i;
    }
    if(i==0) final=1;
    else x[i]=1;
}
int main(){
    cin >> n;
    while(!final){
        for(int i=1 ; i<=n ; i++){
            cout << x[i] <<" ";
        }
        cout << endl;
        sinh();
    }
}