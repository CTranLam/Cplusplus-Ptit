#include <bits/stdc++.h> 
using namespace std; 
void solve(string x, string y){
    char tmp[100005];
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    for(int i=0 ; i<x.size()+y.size() ; i++){
        tmp[i]='0';
    }
    for(int i=0 ; i<x.size() ; i++){
        int nho=0;
        int j;
        for( j=0 ; j<y.size() ; j++){
            int res=(x[i]-'0') * (y[j]-'0') + nho + (tmp[i+j]-'0');
           nho=res/10;
           tmp[i+j]=res%10+'0';
        }
        if(nho > 0) tmp[i+j]=nho+'0';
    }
    int ok=0;
    vector<char> v;
    int pos=-1;
    for(int i=x.size() + y.size()-1 ; i >= 0 ; i--){
        if(tmp[i] != '0'){
            pos=i;
            break;
        }
    }
    for(int i=0 ; i<=pos ; i++){
        v.push_back(tmp[i]);
    }
    if(v.empty()){
        cout <<"0" <<endl;
        return;
    }
    reverse(v.begin(),v.end());
    for(char x : v){
        cout << x;
    }
    cout << endl;
}
int main(){ 
    int t; cin>>t; 
    while(t--){ 
        string x, y; 
        cin >> x >> y; 
        solve(x,y);
    } 
}