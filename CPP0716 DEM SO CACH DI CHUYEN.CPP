#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
int dx[2]={0,1};
int dy[2]={1,0};
int cnt=0;
int used[25][25];
int a[25][25];
void Try(int i,int j,int sum){
    if(sum > k) return;
    if(i==n && j==n){
        if(sum==k){
            ++cnt;
            return;
        }
    }
        for(int k=0 ; k<2 ; k++){
            int i1=i+dx[k];
            int j1=j+dy[k];
            if(i1 >0 && i1 <=n && j1 > 0 && j1 <=n && used[i1][j1]==0){
                used[i1][j1]=1;
                Try(i1,j1,sum+a[i1][j1]);
                used[i1][j1]=0;
            }
        }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cnt=0;
        cin >> n >> k;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                cin >> a[i][j];
            }
        }
        used[1][1]=1;
        Try(1,1,a[1][1]);
        cout << cnt << endl;
    }
}