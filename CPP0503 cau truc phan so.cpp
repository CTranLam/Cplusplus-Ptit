#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo{
	ll tu,mau;
};
void nhap(PhanSo &p){
	cin  >> p.tu >> p.mau;
}
void rutgon(PhanSo &p){
	ll tmp=__gcd(p.tu,p.mau);
	p.tu/=tmp;
	p.mau/=tmp;
}
void in(PhanSo p){
	cout <<p.tu <<"/" << p.mau << endl;
}
int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
