#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char,int> mp;
        for(char x : s){
            mp[x]++;
        }
        int cnt=0;
        int dem[256]={0};
        int l=0,ans=INT_MAX;
        for(int i=0 ; i<s.size() ; i++){
            dem[s[i]]++;
            if(dem[s[i]]==1) ++cnt;
            if(cnt==mp.size()){
                while(dem[s[l]] >1){
                    dem[s[l]]--;
                    l++;
                }
                if(ans > i-l+1) ans=i-l+1;
            }
        }
        cout << ans <<endl;
    }
}