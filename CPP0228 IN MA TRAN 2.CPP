#include<bits/stdc++.h> 
using namespace std; 
signed main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0); 
    int t, n; 
    cin >> t; 
    while(t--){ 
        cin >> n; 
        int m=4*n, x=1; 
        int a[m+1][m+1]; 
        for(int i=1; i<=m; i++){ 
            for(int j=1; j<=m; j++){ 
                a[i][j] = x; x++; 
            } 
        } 
        int i; int l=m/2, r=l+2, t=m/2-1, d=m/2+1; 
        queue<int> q1, q2; 
        while(1){ 
            for(i = d; i>t; i--) q1.push(a[i][l]); 
            d+=2; 
            for(i = l; i<r; i++) q1.push(a[t][i]); 
            l-=2; 
            for(i = t; i<d; i++) q1.push(a[i][r]); 
            t-=2; 
            if(t<1) break; 
            for(i = r; i>l; i--) q1.push(a[d][i]); 
            r+=2; 
        } 
        l=m/2-1, r=m/2+1, t=m/2, d=t+2; 
        while(1){ 
            for(i = t; i<d; i++) q2.push(a[i][r]); 
            t-=2; 
            for(i = r; i>l; i--) q2.push(a[d][i]); 
            r+=2; 
            for(i = d; i>t; i--) q2.push(a[i][l]); 
            d+=2; 
            if(d>m) break; 
            for(i = l; i<r; i++) q2.push(a[t][i]); 
            l-=2; 
        } 
        while(!q1.empty()){ 
            cout << q1.front() << " "; 
            q1.pop(); 
        } 
        cout << endl; 
        while(!q2.empty()){ 
            cout << q2.front() << " "; 
            q2.pop(); 
        } 
        cout << endl; 
    } 
}