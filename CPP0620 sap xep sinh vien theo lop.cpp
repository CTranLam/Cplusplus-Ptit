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
		string getma(){
			return msv;
		}
		string getlop(){
			return lop;
		}
};
bool cmp(sinhvien a,sinhvien b){
	if(a.getlop() != b.getlop()){
		return a.getlop() < b.getlop();
	}
	else return a.getma() < b.getma();
}
int main(){
	int n;
	cin >> n;
	sinhvien a[n];
	cin.ignore();
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a,a+n,cmp);
	for(int i=0 ; i<n ; i++){
		cout << a[i] <<endl;
	}
}
