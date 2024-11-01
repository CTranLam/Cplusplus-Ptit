#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Try(int m,vector<int> v,vector<vector<int>> ans){
    for(int i=0 ; i<=1 ; i++){
        v.push_back(i);
        if(v.size()==m){
            ans.push_back(v);
            return;
        }
        else{
            Try(m,v,ans);
            v.pop_back();
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        string s;
        cin >> s;
        vector<int> v;
        vector<vector<int>> ans;
        Try(m,v,ans);
        cout << ans.size() <<endl;
    }
}
