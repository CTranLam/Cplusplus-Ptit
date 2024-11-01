#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
int a[25][25];
int n,m;
void loang(int i,int j){
    a[i][j]=2;
    for(int k=0 ; k<4 ; k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(a[i1][j1]==0 && i1 <=n && j1 <=m && i1 >=1 && j1 >=1){
            loang(i1,j1);
        } 
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        char tmp[25][25];
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                cin >> tmp[i][j];
                if(tmp[i][j]=='X') a[i][j]=1;
                else a[i][j]=0;
            }
        }
        for(int i=1 ; i<=n ; i++){
            if(a[i][m]==0){
                loang(i,m);
            }
            if(a[i][1]==0){
                loang(i,1);
            }
        }
        for(int i=1 ; i<=m ; i++){
            if(a[1][i]==0){
                loang(1,i);
            }
            if(a[n][i]==0){
                loang(n,i);
            }
        }
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=m ; j++){
                if(a[i][j] != 2){
                    cout << 'X' <<" ";
                }
                else{
                    cout << 'O' <<" ";
                }
            }
            cout << endl;
        }
    }
}