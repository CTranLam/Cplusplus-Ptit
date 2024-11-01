#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class NhanVien{
	private:
		string ma,ten,gt,ns,dc,mst,hd;
	public:
		friend istream& operator >> (istream& in, NhanVien &x){
			x.ma="00001";
			getline(in,x.ten);
			getline(in,x.gt);
			getline(in,x.ns);
			getline(in,x.dc);
			getline(in,x.mst);
			getline(in,x.hd);
			return in;
		}
		friend ostream& operator >> (ostream& out, NhanVien &x){
			out << x.ma <<" "<<x.ten<<" "<<x.gt << " "<<x.ns<<" "<<x.dc<<" "<<x.mst<<" "<<x.hd<< endl;
			return out;
		}
};
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}
