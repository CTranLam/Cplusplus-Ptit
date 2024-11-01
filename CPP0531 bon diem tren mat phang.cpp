#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Diem{
    int x,y,z;
};
int main(){
    int t;
    cin >> t;
    while(t--){
        Diem a,b,c,d;
        cin >> a.x >> a.y >> a.z;
        cin >> b.x >> b.y >> b.z;
        cin >> c.x >> c.y >> c.z;
        cin >> d.x >> d.y >> d.z;
        Diem ab;
        ab.x=b.x-a.x;
        ab.y=b.y-a.y;
        ab.z=b.z-a.z;
        Diem ac;
        ac.x=c.x-a.x;
        ac.y=c.y-a.y;
        ac.z=c.z-a.z;
        Diem ad;
        ad.x=d.x-a.x;
        ad.y=d.y-a.y;
        ad.z=d.z-a.z;
        Diem tmp;
        tmp.x=ab.y*ac.z - ab.z*ac.y;
        tmp.y=ab.z*ac.x - ab.x*ac.z;
        tmp.z=ab.x*ac.y - ab.y*ac.x;
        int det=ad.x*tmp.x + ad.y*tmp.y + ad.z*tmp.z;
        if(det==0) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
}