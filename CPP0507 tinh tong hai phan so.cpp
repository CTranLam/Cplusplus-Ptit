#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo{
	ll tu,mau;
};
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}
PhanSo tong(PhanSo a,PhanSo b){
	int tua=a.tu,maua=a.mau;
	int tub=b.tu,maub=b.mau;
	ll mauc=(ll)a.mau*b.mau;
	ll tuc=(ll)tua*maub+(ll)tub*maua;
	ll tmp=__gcd(tuc,mauc);
	tuc/=tmp;
	mauc/=tmp;
	PhanSo x;
	x.tu=tuc;
	x.mau=mauc;
	return x;
}
void in(PhanSo t){
	cout << t.tu <<"/" <<t.mau << endl;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
