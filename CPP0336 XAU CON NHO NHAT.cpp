#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; cin >> t; 
    while (t--) { 
        string s, t; 
        cin >> s >> t; 
        int cnt1[256] = {0}, cnt2[256] = {0}; 
        for (int i = 0; i < t.size(); ++i) { 
            ++cnt2[t[i]]; 
        } 
        int ans = INT_MAX,l = 0, cnt = 0, idx = -1; 
        for(int i=0 ; i<s.size() ; i++){
            cnt1[s[i]]++;
            if(cnt1[s[i]] <= cnt2[s[i]]) ++cnt;
            if(cnt == t.size()){
                while(cnt1[s[l]] > cnt2[s[l]]){
                    cnt1[s[l]]--;
                    ++l;
                }
                if(ans > i-l+1){
                    ans=i-l+1;
                    idx=l;
                }
            }
        }
        if(idx==-1){
            cout << -1 <<endl;
        }
        else{
            for(int i=idx ; i< idx + ans ; i++ ){
                cout << s[i];
            }
            cout << endl;
        }
    }
}