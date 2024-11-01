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
	return a.getma() < b.getma();
}
int main(){
	vector<sinhvien> v;
	sinhvien x;
	while(cin >> x){
		v.push_back(x);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto x : v){
		cout << x <<endl;
	}
	
}
