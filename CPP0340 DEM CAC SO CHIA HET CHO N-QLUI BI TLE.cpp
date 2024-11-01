#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int m,n;
string s;
vector<string> ans;
void check(vector<int> v,string s){
    string tmp="";
    for(int i=0 ; i<v.size() ; i++){
        if(v[i]==1){
            tmp+=s[i];
        }
    }
    int res=0;
    for(char x : tmp){
        res=res*10+x-'0';
        res%=n;
    }
    if(res==0 && tmp != "") ans.push_back(tmp);
    else return;
}
void Try(int m,vector<int> v){
    if(v.size() == m){
        check(v,s);
        return;
    }
    else{
        for(int i=0 ; i<=1 ; i++){
            v.push_back(i);
            Try(m,v);
            v.pop_back();
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        cin >> s;
        vector<int> v;
        Try(m,v);
        // for(string x : ans){
        //     cout << x <<" ";
        // }
        // cout << endl;
        cout << ans.size() <<endl;
        ans.clear();
    }
}