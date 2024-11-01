#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class SinhVien{
	private:
		string ma,ten,lop,ns;
		double gpa;
		int static cnt;
	public:
		void chuanhoa(){
			if(ns[2] != '/') ns.insert(0,"0");
			if(ns[5] != '/') ns.insert(3,"0");
		}
		void nhap(){
			ma="B20DCCN00"+to_string(cnt);
			getline(cin,ten);
			cin >> lop >> ns >> gpa;
			chuanhoa();	
		}
		void xuat(){
			cout << ma <<" "<<ten<<" "<<lop <<" "<<ns << " "<<fixed <<setprecision(2) << gpa << endl;
		}
};
int SinhVien :: cnt=1;
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
