#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(string a,string b){
    return a.size() > b.size();
}
int main(){
   int n;
   cin >> n;
   string a[n];
   for(int i=0 ; i<n ; i++){
        cin >> a[i];
   }
   sort(a,a+n,cmp);
   int cnt=0;
   for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        if(a[i].size() <= a[j].size() && a[j].find(a[i]) != string :: npos && i != j){
            ++cnt;
        }
        else if(a[i].size() > a[j].size()){
            break;
        }
    }
   }
   cout << cnt <<endl;
}