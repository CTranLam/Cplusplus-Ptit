#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[100];
int used[100];
void Try(int i){
    for(int j=1 ; j<=n ; j++){
        if(!used[j]){
            a[i]=j;
            used[j]=1;
            if(i==n){
                for(int i=1 ; i<=n ; i++){
                    cout << a[i] <<" ";
                }
                cout << endl;
            }
            else{
                Try(i+1);
            }
            used[j]=0;
        }
    }
}
int main(){
    cin >> n;
    Try(1);
}