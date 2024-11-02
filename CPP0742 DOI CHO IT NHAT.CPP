#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int min_swap(vector<int> &a){
    int n=a.size();
    vector<pair<int,int>> v; // gtri + chi so
    for(int i=0 ; i<n ; i++){
        v.push_back({a[i],i});
    }
    sort(v.begin(),v.end());
    int visited[10005]={0};
    int cnt=0;
    for(int i=0 ; i<n ; i++){
        if(v[i].second==i || visited[i]) continue; // da dung vi tri
        int c_len=0;
        int j=i; 
        // phan tu o vi tri j thi doi cho voi phan tu o vi tri nao
        while(!visited[j]){ //chay 1 vong ve vi tri j ban dau-> 1 chu  ki
            visited[j]=1;
            j=v[j].second;
            ++c_len;
        }
        if(c_len > 0){
            cnt+=c_len-1;
        }
    }
    return cnt;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i=0 ; i<n ; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        cout << min_swap(a) <<endl;
    }
}