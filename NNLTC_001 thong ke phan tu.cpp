#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main(){
    int n;
    map<int,int> mp;
    vector<int> v;
    while(cin >> n){
        mp[n]++;
        v.push_back(n);
    }
    for(int x : v){
        if(mp[x] != 0){
            cout << x <<" "<<mp[x] <<endl;
            mp[x]=0;
        }
    }
}