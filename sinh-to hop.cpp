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
int final=0;
void sinh(){
    int i=k;
    while(x[i] == n-k+i && i >= 1){
        --i;
    }
    if(i==0) final=1;
    else{
        x[i]++;
        for(int j=i+1 ; j<=n ; j++){
            x[j]=x[j-1]+1;
        }
    }
}
int main(){
    cin >> n >> k;
    while(!final){
        for(int i=1 ; i<=k ; i++){
            cout << x[i] <<" ";
        }
        cout << endl;
        sinh();
    }
}