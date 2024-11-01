#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dx[4]={-1,0,0,1};
int dy[4]={0,1,-1,0};
int a[1005][1005];
int step[1005][1005];
void solve(){
    int n,m,x,y,z,t;
    cin >> n >> m >> x >> y >> z >> t;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin >> a[i][j];
        }
    }
    if(a[z][t]==0 || a[x][y]==0){
        cout << "-1" << endl;
        return;
    }
    queue<pair<int,int>> q;
    q.push({x,y});
    a[x][y]=0;
    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        if(i==z && j==t){
            cout << step[i][j] <<endl;
            return;
        }
        for(int k=0 ; k<4 ; k++){
            int i1=i+dx[k];
            int j1=j+dy[k];
            if(i1 >=0 && i1<n && j1>=0 && j1<m && a[i1][j1]==1){
                q.push({i1,j1});
                a[i1][j1]=0;
                step[i1][j1]=step[i][j]+1;
            }
        }
    }
    cout << "-1" << endl;
    return;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}