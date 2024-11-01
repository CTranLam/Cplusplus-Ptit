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
		string fix_ten(){
			for(int i=0 ; i<ten.size() ; i++){
				ten[i]=tolower(ten[i]);
			}
			stringstream ss(ten);
			string t;
			string ans="";
			while(ss >> t){
				t[0]=toupper(t[0]);
				ans+=t +" ";
			}
			return ans;
		}
		friend istream& operator >> (istream& in,SinhVien &x){
			x.msv="B20DCCN001";
			getline(in,x.ten);
			in >> x.lop >> x.ns >> x.gpa;
			x.chuanhoa();
			x.ten=x.fix_ten();
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
