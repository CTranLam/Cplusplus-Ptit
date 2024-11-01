#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class SinhVien{
	private:
		string msv,ten,lop,ns;
		double gpa;
		int static cnt;
	public:
		void chuanhoa(){
			if(ns[2] != '/') ns.insert(0,"0");
			if(ns[5] != '/') ns.insert(3,"0");
		}
		friend istream& operator >> (istream& in ,SinhVien& x){
			in.ignore();
			getline(in,x.ten);
			getline(in,x.lop);
			getline(in,x.ns);
			in >> x.gpa;
			x.chuanhoa();
			return in;
		}
		friend ostream& operator << (ostream& out, SinhVien &x){
			string tmp=to_string(cnt);
			if(cnt <= 9){
				tmp="B20DCCN00"+tmp;
			}
			else{
				tmp="B20DCCN0"+tmp;
			}
			++cnt;
			x.msv=tmp;
			out << x.msv<<" "<<x.ten <<" "<<x.lop <<" "<<x.ns<<" "<<fixed <<setprecision(2) << x.gpa <<endl;
			return out;
		}
};
int SinhVien::cnt=1;// khoi tao gia tri cho bien static
int main(){
	SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
