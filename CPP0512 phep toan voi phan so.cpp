#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo{
	int tu,mau;
};
void process(PhanSo a,PhanSo b){
	int mc= (a.mau * b.mau)/__gcd(a.mau,b.mau);
	int tmp1=a.tu * mc/a.mau;
	int tmp2=b.tu * mc/b.mau;
	int tc=tmp1+tmp2;
	int t1=tc*tc;
	int m1=mc*mc;
	int rg=__gcd(m1,t1);
	t1/=rg;
	m1/=rg;
	cout << t1 <<"/" <<m1 <<" ";
	ll t2=(ll)a.tu * b.tu * t1;
	ll m2=(ll)a.mau *b.mau * m1;
	ll rg2=__gcd(t2,m2);
	t2/=rg2;
	m2/=rg2;
	cout << t2 <<"/" <<m2 <<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--){
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
