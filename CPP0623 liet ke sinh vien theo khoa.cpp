#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class sinhvien{
	private:
		string msv,ten,lop,email;
	public:
		friend istream& operator >> (istream& in ,sinhvien &x){
			getline(in,x.msv);
			getline(in,x.ten);
			getline(in,x.lop);
			getline(in,x.email);
			return in;
		}
		friend ostream& operator << (ostream& out,sinhvien &x){
			cout << x.msv <<" "<<x.ten<<" "<<x.lop<<" "<<x.email <<endl;
			return out;
		}
		string getlop(){
			return lop;
		}
};
int main(){
	int n;
	cin >> n;
	sinhvien a[n];
	cin.ignore();
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	int q; cin >> q;
	cin.ignore();
	while(q--){
		string tar;
		getline(cin,tar);
		cout << "DANH SACH SINH VIEN KHOA " <<tar <<":" <<endl;
		for(int i=0 ; i<n ; i++){
			string tmp=a[i].getlop();
			string cur="20";
			cur+=to_string(tmp[1]-'0')+to_string(tmp[2]-'0');
			if(cur==tar) cout << a[i] <<endl;
		}
	}
}
