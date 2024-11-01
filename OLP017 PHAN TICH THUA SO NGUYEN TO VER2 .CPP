#include <bits/stdc++.h>
using namespace std;
const long long MAX = 1e7;
typedef long long ll;
int isPrime[MAX];
vector<long long> prime; 
void sang(){ 
    memset(isPrime,1, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false; 
    ll lim = sqrt(MAX); 
    for (ll i = 2; i <= lim; ++i) { 
        if (isPrime[i]) { 
            prime.push_back(i); 
            for (ll j = i * i; j < MAX; j += i) 
                isPrime[j] = false; 
        } 
    } 
    for (ll i = lim + 1; i < MAX; ++i) { 
        if (isPrime[i]) { 
            prime.push_back(i); 
        } 
    } 
} 
map<ll,ll> solve(ll n) { 
    map<ll,ll> mp; 
    ll maxn = sqrt(n); 
    for (ll x : prime){ 
        if (x > maxn) break; 
        while (n % x == 0){ 
            mp[x]++; 
            n /=x; 
        } 
        maxn = sqrt(n); 
    } 
    if (n > 1) ++mp[n]; 
    return mp; 
} 
int main() { 
    sang(); 
    long long t;
    cin >> t; 
    while (t--) { 
        ll n; 
        cin >> n;
        map<ll,ll> mp=solve(n);
        for(auto x : mp){
            cout << x.first <<" "<<x.second <<endl;
        }
        cout << endl;
    }
}