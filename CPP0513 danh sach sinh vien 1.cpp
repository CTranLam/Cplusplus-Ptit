#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct SinhVien{
	string ten,lop,ns;
	double gpa;
};
void chuanhoa(string& s){
	if(s[2] != '/'){
		s.insert(0,"0");
	}
	if(s[5] != '/'){
		s.insert(3,"0");
	}
}

void nhap(SinhVien ds[],int n){
	cin.ignore();
	for(int i=0 ; i<n ; i++){
		getline(cin,ds[i].ten);
	 	getline(cin,ds[i].lop);
		getline(cin,ds[i].ns);
		chuanhoa(ds[i].ns);
		cin >> ds[i].gpa;
		cin.ignore();
	}
}
void in(SinhVien ds[],int n){
	for(int i=0 ; i<n ; i++){
		string s="";
		if(i<9) s="B20DCCN00";
		else s="B20DCCN0";
		cout << s << i+1 <<" "<<ds[i].ten <<" "<<ds[i].lop <<" "<<ds[i].ns <<" "<<fixed <<setprecision(2) <<ds[i].gpa <<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
