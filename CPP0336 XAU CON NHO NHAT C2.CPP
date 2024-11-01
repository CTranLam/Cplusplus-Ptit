#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin >> s >> t;
        int cnt1[256]={0},cnt2[256]={0};
        for(char x : t){
            cnt2[x]++;
        }
        int ans=INT_MAX;
        int pos=0,dem=0;
        int index=-1;
        for(int i=0 ; i<s.size() ; i++){
            cnt1[s[i]]++;
            if(cnt1[s[i]] <= cnt2[s[i]]){
                ++dem;
            }
            if(dem==t.size()){
                while(cnt1[s[pos]] > cnt2[s[pos]]){
                    cnt1[s[pos]]--;
                    pos++;
                }
                if(ans > i-pos+1){
                    ans=i-pos+1;
                    index=pos;
                }
            }
        }
        if(index==-1){
            cout << index <<endl;
        }
        else{
            for(int i=index ; i<index + ans ; i++){
                cout << s[i];
            }
            cout << endl;
        }
    }
}