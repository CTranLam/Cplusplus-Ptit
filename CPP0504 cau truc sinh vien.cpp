#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct SinhVien{
	string msv,ten,lop,ns;
	double gpa;
};
void nhap(SinhVien &a){
	a.msv="B20DCCN001";
	getline(cin,a.ten);
	cin>> a.lop >> a.ns >> a.gpa;
}
void chuanhoa(string &s){
	if(s[2] != '/') s.insert(0,"0");
	if(s[5] != '/') s.insert(3,"0");
}
void in(SinhVien a){
	chuanhoa(a.ns);
	cout << a.msv <<" "<<a.ten<<" "<<a.lop<< " "<<a.ns <<" "<<fixed <<setprecision(2) << a.gpa << endl; 
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
