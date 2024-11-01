#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        int L[n],R[n]; // luu do dai day con tang dai nhat tu ben trai va phai
        for(int i=0 ; i<n ; i++){
            L[i]=1;
            for(int j=0 ; j<i ; j++){ // xet nhung thang da duyet qua
                if(a[i] > a[j]){
                    L[i]=max(L[i],L[j]+1);
                }
            }
        }
        for(int i=n-1 ; i>=0 ; i--){
            R[i]=1;
            for(int j=i+1 ; j<n ; j++){ // xet nhung thang da duyet qua
                if(a[i] > a[j]){
                    R[i]=max(R[i],R[j]+1);
                }
            }
        }
        int lenn=0;
        for(int i=0 ; i<n ; i++){
            lenn=max(lenn,L[i]+R[i]-1);
        }
        cout << lenn << endl;
    }
}