#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
string sum(string a,string b){
    if(a.size() < b.size()){
        swap(a,b);
    }
    while(a.size() > b.size()){
        b="0"+b;
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int tong=0,nho=0;
    string ans="";
    for(int i=0 ; i<a.size() ; i++){
        tong=a[i]-'0'+b[i]-'0'+nho;
        ans+=(char)(tong%10 +'0');
        nho=tong/10;
    }
    if(nho != 0){
        ans+=(char)(nho+'0');
    }
    reverse(ans.begin(),ans.end());
    return ans;
} 
// l: bat dau cat
// l1: kich thuoc chuoi cat so 1
// l2: kich thuoc chuoi cat so 2
bool check(string s,int l ,int l1,int l2){
    string s1=s.substr(l , l1);
    string s2=s.substr(l+l1 ,l2);
    string tmp=sum(s1,s2);
    if(tmp.size() > (s.size()-l1-l2-l)) return 0;
    if(tmp == s.substr(l+l1+l2,tmp.size())){
        if(s.size() == l+ l1+ l2+ tmp.size()) return 1;
        return check(s,l+l1,l2,tmp.size());
    }
    return 0;
}
void solve(){
    string s;
    cin >> s;
    int n=s.size();
    for(int i=1 ; i<=n/2 ; i++){
        for(int j=1 ; j+i <n ; j++){
            if(check(s,0,i,j)){
                cout << "Yes" <<endl;
                return;
            }
        }
    }
    cout << "No" <<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
         solve();
    }
}