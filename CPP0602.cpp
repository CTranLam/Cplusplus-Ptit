#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class SinhVien{
	private:
		string msv,ten,lop,ns;
		double gpa;
	public:
		void chuanhoa(){
			if(ns[2] != '/') ns.insert(0,"0");
			if(ns[5] != '/') ns.insert(3,"0");
		}
		friend istream& operator >> (istream& in,SinhVien &x){
			x.msv="B20DCCN001";
			getline(in,x.ten);
			in >> x.lop >> x.ns >> x.gpa;
			x.chuanhoa();
			return in;
		}
		friend ostream& operator << (ostream& out,SinhVien &x){
			out << x.msv <<" "<<x.ten <<" "<<x.lop <<" "<<x.ns <<" "<<fixed << setprecision(2)<<x.gpa << endl;
			return out; 
		}
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
