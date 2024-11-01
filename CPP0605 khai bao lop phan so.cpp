#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll tu ,ll mau){
			this->tu=tu;
			this->mau=mau;
		}
		friend istream& operator >> (istream& in, PhanSo& x){
			in >> x.tu >> x.mau;
			return in;
		}
		void rutgon(){
			ll mc=__gcd(tu,mau);
			tu/=mc;
			mau/=mc;
		}
		friend ostream& operator << (ostream& out, PhanSo& x){
			out << x.tu <<"/" <<x.mau << endl;
			return out;
		}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
