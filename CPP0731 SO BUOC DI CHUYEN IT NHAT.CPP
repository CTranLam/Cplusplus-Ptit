#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int a[10005];
int ans;
struct A{
    int value,pos,step;
};
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }
        ans=INT_MAX;
        queue<A> q;
        q.push({a[0],0,0});
        int ok=0;
        while(!q.empty()){
            auto x=q.front();
            int v=x.value;
            int p=x.pos;
            int s=x.step;
            q.pop();
            if(p==n-1){
                cout << s <<endl;
                ok=1;
                break;
            }
            else{
                for(int i=0 ; i<=v ; i++){
                    if(p+i<n ) q.push({a[p+i] ,p+i,s+1});
                }
            }
        }
        if(!ok){
            cout << -1 << endl;
        }
    }
}