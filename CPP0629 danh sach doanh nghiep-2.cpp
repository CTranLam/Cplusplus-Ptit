#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class DoanhNghiep{
	private:	
		string ma,ten;
		int sl;
	public:
		friend istream& operator >> (istream& in,DoanhNghiep &x){
			in.ignore();
			getline(in,x.ma);
			getline(in,x.ten);
			in >> x.sl;
			return in;
		}
		friend ostream& operator << (ostream& out , DoanhNghiep& x){
			out << x.ma <<" "<<x.ten <<" "<<x.sl <<endl;
			return out;
		}
		int getsl(){
			return sl;
		}
		string getma(){
			return ma;
		}
};
bool cmp(DoanhNghiep a,DoanhNghiep b){
	if(a.getsl() != b.getsl()) return a.getsl() > b.getsl();
	else{
		return a.getma() < b.getma();
	}
}
int main(){
	int n;
	cin >> n;
	DoanhNghiep a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	int q;
	cin >> q;
	while(q--){
		int p,q;
		cin >> p >> q;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " <<p <<" DEN "<<q<<" SINH VIEN:" <<endl;
		for(int i=0 ; i<n ; i++){
			if(a[i].getsl() >= p && a[i].getsl() <=q){
				cout << a[i];
			}
		}
	}
}
