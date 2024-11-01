#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct SinhVien{
	string ten,lop,ns;
	double gpa;
};
void chuanhoa1(string& s){
	if(s[2] != '/'){
		s.insert(0,"0");
	}
	if(s[5] != '/'){
		s.insert(3,"0");
	}
}
void chuanhoa2(string &s){
	for(int i=0 ; i<s.size() ; i++){
		if(isalpha(s[i])){
			s[i]=tolower(s[i]);
		}
	}
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	string res="";
	for(string &x : v){
		x[0]=toupper(x[0]);
		res+=x+" ";
	}
	s=res;
}
void nhap(SinhVien ds[],int n){
	cin.ignore();
	for(int i=0 ; i<n ; i++){
		getline(cin,ds[i].ten);
		chuanhoa2(ds[i].ten);
	 	getline(cin,ds[i].lop);
		getline(cin,ds[i].ns);
		chuanhoa1(ds[i].ns);
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
