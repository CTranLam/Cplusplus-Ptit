#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int  n;
int x[100];
void init(){
    for(int i=1 ; i<=n ; i++){
        x[i]=i;
    }
}
int used[100];
int final=0;
void sinh(){
    int i=n-1;
    while(i>=1 && x[i] > x[i+1]){
        --i;
    }
    if(i==0) final=1;
    else{
        int j=n;
        while(x[i] > x[j]) --j;
        swap(x[i],x[j]);
        reverse(x+i+1,x+n+1);
    }
}
int main(){
    cin >> n;
    init();
    while(!final){
        for(int i=1 ; i<=n ; i++){
            cout << x[i] <<" ";
        }
        cout << endl;
        sinh();
    }
}