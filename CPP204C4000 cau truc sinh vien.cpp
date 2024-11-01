#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct SinhVien{
	string ma,ten,lop,ns;
	double gpa;
};
void chuanhoa(string& s){
	if(s[2] != '/') s.insert(0,"0");
	if(s[5] != '/') s.insert(3,"0");
}
void nhapThongTinSV(SinhVien& a){
	a.ma="N20DCCN001";
	getline(cin,a.ten);
	cin >> a.lop >> a.ns >> a.gpa;
	chuanhoa(a.ns);
}
void inThongTinSV(SinhVien a){
	cout << a.ma <<" "<<a.ten<<" "<<a.lop<<" "<<a.ns <<" "<<fixed<<setprecision(2)<<a.gpa << endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
